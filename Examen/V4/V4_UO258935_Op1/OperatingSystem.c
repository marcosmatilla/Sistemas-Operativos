#include "OperatingSystem.h"
#include "OperatingSystemBase.h"
#include "MMU.h"
#include "Processor.h"
#include "Buses.h"
#include "Heap.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

// Functions prototypes
void OperatingSystem_PrepareDaemons();
void OperatingSystem_PCBInitialization(int, int, int, int, int);
void OperatingSystem_MoveToTheREADYState(int,int);
void OperatingSystem_Dispatch(int);
void OperatingSystem_RestoreContext(int);
void OperatingSystem_SaveContext(int);
void OperatingSystem_TerminateProcess();
int OperatingSystem_LongTermScheduler();
void OperatingSystem_PreemptRunningProcess();
int OperatingSystem_CreateProcess(int);
int OperatingSystem_ObtainMainMemory(int, int, char*);
int OperatingSystem_ShortTermScheduler();
int OperatingSystem_ExtractFromReadyToRun();
void OperatingSystem_HandleException();
void OperatingSystem_HandleSystemCall();
void OperatingSystem_PrintReadyToRunQueue();
void OperatingSystem_HandleClockInterrupt(); 
void OperatingSystem_MoveToTheBLOCKState();
int OperatingSystem_ExtractFromBlocked();
int OperatingSystem_CheckQueue();
int OperatingSystem_ExtractFromBlocked();
int OperatingSystem_CheckExecutingPriority(int);
int OperatingSystem_GetExecutingProcessID();
void OperatingSystem_ShowPartitionTable(char *mensaje); //Exercise 7 of V4
void OperatingSystem_ReleaseMainMemory(); //Excercise 8 of V4

int Processor_GetException();
//ex-4
//Number of clock interruptions
int numberOfClockInterrupts = 0;

// In OperatingSystem.c Exercise 5-b of V2
// Heap with blocked processes sort by when to wakeup
heapItem sleepingProcessesQueue[PROCESSTABLEMAXSIZE];
int numberOfSleepingProcesses=0;

//procesos
char * statesNames [5]={"NEW","READY","EXECUTING","BLOCKED","EXIT"};

//Exercise 2 of V4
char * exceptions[4]={"division by zero", "invalid processor mode", "invalid address", "invalid instruction"}; 

//Exercise 7 of V4
char * allocating[2]={"before allocating memory","after allocating memory"}; 

//Exercirse 8 of V4
char * allocating2[2]={"before releasing memory","after releasing memory"};

// The process table
PCB processTable[PROCESSTABLEMAXSIZE];

// Address base for OS code in this version
int OS_address_base = PROCESSTABLEMAXSIZE * MAINMEMORYSECTIONSIZE;

// Identifier of the current executing process
int executingProcessID=NOPROCESS;

// Identifier of the System Idle Process
int sipID;

// Initial PID for assignation
int initialPID=PROCESSTABLEMAXSIZE-1;
// Begin indes for daemons in programList
int baseDaemonsInProgramList; 

// Array that contains the identifiers of the READY processes
//heapItem readyToRunQueue[PROCESSTABLEMAXSIZE];
//int numberOfReadyToRunProcesses=0;
heapItem readyToRunQueue [NUMBEROFQUEUES][PROCESSTABLEMAXSIZE];
int numberOfReadyToRunProcesses[NUMBEROFQUEUES]={0,0};
char * queueNames [NUMBEROFQUEUES]={"USER","DAEMONS"};

// Variable containing the number of not terminated user processes
int numberOfNotTerminatedUserProcesses=0;

// Initial set of tasks of the OS
void OperatingSystem_Initialize(int daemonsIndex) {
	
	int i, selectedProcess;
	FILE *programFile; // For load Operating System Code

	// Obtain the memory requirements of the program
	int processSize=OperatingSystem_ObtainProgramSize(&programFile, "OperatingSystemCode");

	// Load Operating System Code
	OperatingSystem_LoadProgram(programFile, OS_address_base, processSize);
	
	// Process table initialization (all entries are free)
	for (i=0; i<PROCESSTABLEMAXSIZE;i++){
		processTable[i].busy=0;
	}
	// Initialization of the interrupt vector table of the processor
	Processor_InitializeInterruptVectorTable(OS_address_base+2);

	OperatingSystem_InitializePartitionTable(); //Excercise 5 of V4
		
	// Include in program list  all system daemon processes
	OperatingSystem_PrepareDaemons(daemonsIndex);

	ComputerSystem_FillInArrivalTimeQueue(); //ex-0 c V3
	OperatingSystem_PrintStatus(); //ex-0 d V3

	//ex-15 V1
	// Create all user processes from the information given in the command line
	OperatingSystem_LongTermScheduler(); 
	//end ex-15 V1

	if( numberOfNotTerminatedUserProcesses == 0 && arrivalTimeQueue == 0){ 
		OperatingSystem_ReadyToShutdown();
	}

	if (strcmp(programList[processTable[sipID].programListIndex]->executableName,"SystemIdleProcess")) {
		// Show red message "FATAL ERROR: Missing SIP program!\n"
		ComputerSystem_DebugMessage(99,SHUTDOWN,"FATAL ERROR: Missing SIP program!\n");
		exit(1);		
	}


	
	// At least, one user process has been created
	// Select the first process that is going to use the processor
	selectedProcess=OperatingSystem_ShortTermScheduler();

	// Assign the processor to the selected process
	OperatingSystem_Dispatch(selectedProcess);

	// Initial operation for Operating System
	Processor_SetPC(OS_address_base);
}

// Daemon processes are system processes, that is, they work together with the OS.
// The System Idle Process uses the CPU whenever a user process is able to use it
void OperatingSystem_PrepareDaemons(int programListDaemonsBase) {
  
	// Include a entry for SystemIdleProcess at 0 position
	programList[0]=(PROGRAMS_DATA *) malloc(sizeof(PROGRAMS_DATA));

	programList[0]->executableName="SystemIdleProcess";
	programList[0]->arrivalTime=0;
	programList[0]->type=DAEMONPROGRAM; // daemon program

	sipID=initialPID%PROCESSTABLEMAXSIZE; // first PID for sipID

	// Prepare aditionals daemons here
	// index for aditionals daemons program in programList
	baseDaemonsInProgramList=programListDaemonsBase;

}


// The LTS is responsible of the admission of new processes in the system.
// Initially, it creates a process from each program specified in the 
// 			command lineand daemons programs
int OperatingSystem_LongTermScheduler() {
	
	int PID, i,
		numberOfSuccessfullyCreatedProcesses=0;
	
	//ex-2 V3
	while(OperatingSystem_IsThereANewProgram()==1) {
		i = Heap_poll(arrivalTimeQueue, QUEUE_ARRIVAL, &numberOfProgramsInArrivalTimeQueue);
		PID=OperatingSystem_CreateProcess(i);
		switch(PID){
			case(NOFREEENTRY):
				OperatingSystem_ShowTime(ERROR);
				ComputerSystem_DebugMessage(103, ERROR, programList[i] -> executableName);
				break;
			case(PROGRAMDOESNOTEXIST):
				OperatingSystem_ShowTime(ERROR);
				ComputerSystem_DebugMessage(104, ERROR, programList[i] -> executableName, "it does not exist");
				break;
			case(PROGRAMNOTVALID):
				OperatingSystem_ShowTime(ERROR);
				ComputerSystem_DebugMessage(104, ERROR, programList[i]->executableName, "invalid priority or size");
				break;
			case(TOOBIGPROCESS):
				OperatingSystem_ShowTime(ERROR);
				ComputerSystem_DebugMessage(105, ERROR, programList[i] -> executableName, "is too big");
				break;
			case(MEMORYFULL): //Exercise 6-d-ii of V4
				OperatingSystem_ShowTime(ERROR);
				ComputerSystem_DebugMessage(144, ERROR, programList[i] -> executableName);
				break;
			default: 
				numberOfSuccessfullyCreatedProcesses++;
				if (programList[i]->type==USERPROGRAM) {
					numberOfNotTerminatedUserProcesses++;
					// Move process to the ready state
					OperatingSystem_MoveToTheREADYState(PID,USERPROCESSQUEUE);
				}
				else{
					OperatingSystem_MoveToTheREADYState(PID,DAEMONSQUEUE);
				}	
		}
	}
	if (numberOfSuccessfullyCreatedProcesses >= 1)
		OperatingSystem_PrintStatus();

	if(numberOfNotTerminatedUserProcesses==0 && numberOfProgramsInArrivalTimeQueue==0) //Ex-4 a V3
		OperatingSystem_ReadyToShutdown();

	// Return the number of succesfully created processes
	return numberOfSuccessfullyCreatedProcesses;
}


// This function creates a process from an executable program
int OperatingSystem_CreateProcess(int indexOfExecutableProgram) {
  
	int PID;
	int processSize;
	int loadingPhysicalAddress;
	int priority;
	FILE *programFile;
	PROGRAMS_DATA *executableProgram=programList[indexOfExecutableProgram];
	int partition;

	// Obtain a process ID
	PID=OperatingSystem_ObtainAnEntryInTheProcessTable();
	if(PID==NOFREEENTRY){
		return NOFREEENTRY;
	}

	// Obtain the memory requirements of the program
	processSize=OperatingSystem_ObtainProgramSize(&programFile, executableProgram->executableName);	
	if(processSize==PROGRAMDOESNOTEXIST){
		return PROGRAMDOESNOTEXIST;
	}
	if(processSize==PROGRAMNOTVALID){
		return PROGRAMNOTVALID;
	}
	
	
	// Obtain the priority for the process
	priority=OperatingSystem_ObtainPriority(programFile);
	if(priority==PROGRAMNOTVALID){
		return PROGRAMNOTVALID;
	}
	
	partition = OperatingSystem_ObtainMainMemory(processSize, PID, executableProgram->executableName);

	// Obtain enough memory space
	loadingPhysicalAddress=partitionsTable[partition].initAddress;

	OperatingSystem_ShowPartitionTable(allocating[0]); //Exercise 7 of V4

	partitionsTable[partition].PID = PID;

	//Exercise 6-c of V4
	OperatingSystem_ShowTime(SYSMEM);
	ComputerSystem_DebugMessage(143, SYSMEM, partition, loadingPhysicalAddress, partitionsTable[partition].size, PID, executableProgram->executableName);
	
	if(partition==TOOBIGPROCESS)//Exercise 6-d-i of V4
		return TOOBIGPROCESS;
	if(partition==MEMORYFULL)//Exercise 6-d-ii of V4
		return MEMORYFULL;

	// PCB initialization
	OperatingSystem_PCBInitialization(PID, loadingPhysicalAddress, processSize, priority, indexOfExecutableProgram);
	
	OperatingSystem_ShowPartitionTable(allocating[1]); //Exercise 7 of V4
	

	// Load program in the allocated memory
	if (TOOBIGPROCESS==OperatingSystem_LoadProgram(programFile, loadingPhysicalAddress, processSize)){
		return TOOBIGPROCESS;
	}

	// Show message "Process [PID] created from program [executableName]\n"
	OperatingSystem_ShowTime(INIT);
	ComputerSystem_DebugMessage(70,INIT,PID,executableProgram->executableName);

	return PID;
}


// Main memory is assigned in chunks. All chunks are the same size. A process
// always obtains the chunk whose position in memory is equal to the processor identifier
int OperatingSystem_ObtainMainMemory(int processSize, int PID, char*name) {
	int i = 0, particion=NOPROCESS, size = MAINMEMORYSIZE, biggest = 0;
	//Exercise 6-b of V4
	OperatingSystem_ShowTime(SYSMEM);
	ComputerSystem_DebugMessage(142, SYSMEM, PID, name, processSize);
	
	//Exercise 6-d-i of V4
	for(i = 0; i<PARTITIONTABLEMAXSIZE; i++){
		if(partitionsTable[i].size > biggest){
			biggest = partitionsTable[i].size;
		}
	}
	
	if(processSize > biggest){
		return TOOBIGPROCESS;
	}

	//Exercise 6-a of V4
	for(i = 0; i<PARTITIONTABLEMAXSIZE; i++){ //Recorremos la tabla de particiones
	 	//no ocupada && tamParticion >= tamProcess && tamPar < MaxSizeMemory
		if(partitionsTable[i].PID == NOPROCESS && partitionsTable[i].size >= processSize && partitionsTable[i].size < size){
			particion = i;
			size = partitionsTable[i].size;
		}
	}

	//Exercise 6-d-ii of V4
	if(particion < 0){
		return MEMORYFULL;
	}

	return particion;
}

// Assign initial values to all fields inside the PCB
void OperatingSystem_PCBInitialization(int PID, int initialPhysicalAddress, int processSize, int priority, int processPLIndex) {
	
	processTable[PID].busy=1;
	processTable[PID].initialPhysicalAddress=initialPhysicalAddress;
	processTable[PID].processSize=processSize;
	processTable[PID].state=NEW;
	processTable[PID].priority=priority;
	processTable[PID].programListIndex=processPLIndex;
	// Daemons run in protected mode and MMU use real address
	if (programList[processPLIndex]->type == DAEMONPROGRAM) {
		processTable[PID].copyOfPCRegister=initialPhysicalAddress;
		processTable[PID].copyOfPSWRegister= ((unsigned int) 1) << EXECUTION_MODE_BIT;
		processTable[PID].queueID = DAEMONSQUEUE;
	} 
	else {
		processTable[PID].copyOfPCRegister=0;
		processTable[PID].copyOfPSWRegister=0;
		processTable[PID].queueID = USERPROCESSQUEUE;
	}

	OperatingSystem_ShowTime(SYSPROC);
	ComputerSystem_DebugMessage(111, SYSPROC,PID,programList[processTable[PID].programListIndex]->executableName);
}


// Move a process to the READY state: it will be inserted, depending on its priority, in
// a queue of identifiers of READY processes
void OperatingSystem_MoveToTheREADYState(int PID, int queueID) {
	int anterior = processTable[PID].state;
	if (Heap_add(PID, readyToRunQueue[queueID],QUEUE_PRIORITY ,&numberOfReadyToRunProcesses[queueID] ,PROCESSTABLEMAXSIZE)>=0) {
		
		OperatingSystem_ShowTime(SYSPROC);
		ComputerSystem_DebugMessage(110, SYSPROC, PID, programList[processTable[PID].programListIndex]->executableName, statesNames[anterior], statesNames[1]);
		processTable[PID].state=READY;
	} 
	//OperatingSystem_PrintReadyToRunQueue(); //Ex-8 V2
}


// The STS is responsible of deciding which process to execute when specific events occur.
// It uses processes priorities to make the decission. Given that the READY queue is ordered
// depending on processes priority, the STS just selects the process in front of the READY queue
int OperatingSystem_ShortTermScheduler() {
	
	int selectedProcess;

	selectedProcess=OperatingSystem_ExtractFromReadyToRun();
	
	return selectedProcess;
}


// Return PID of more priority process in the READY queue
int OperatingSystem_ExtractFromReadyToRun() {
  
	int selectedProcess=NOPROCESS;

	selectedProcess=Heap_poll(readyToRunQueue[USERPROCESSQUEUE],QUEUE_PRIORITY ,&numberOfReadyToRunProcesses[USERPROCESSQUEUE]);
	if (selectedProcess < 0){
		selectedProcess=Heap_poll(readyToRunQueue[DAEMONSQUEUE],QUEUE_PRIORITY ,&numberOfReadyToRunProcesses[DAEMONSQUEUE]);
	}
	
	//selectedProcess=Heap_poll(readyToRunQueue,QUEUE_PRIORITY ,&numberOfReadyToRunProcesses);
	
	// Return most priority process or NOPROCESS if empty queue
	return selectedProcess; 
}


// Function that assigns the processor to a process
void OperatingSystem_Dispatch(int PID) {

	// The process identified by PID becomes the current executing process
	executingProcessID=PID;
	// Change the process' state
	
	processTable[PID].state=EXECUTING;
	OperatingSystem_ShowTime(SYSPROC);
	ComputerSystem_DebugMessage(110, SYSPROC, PID, programList[processTable[PID].programListIndex]->executableName, statesNames[1], statesNames[processTable[PID].state]);
	// Modify hardware registers with appropriate values for the process identified by PID
	OperatingSystem_RestoreContext(PID);
}


// Modify hardware registers with appropriate values for the process identified by PID
void OperatingSystem_RestoreContext(int PID) {
  
	// New values for the CPU registers are obtained from the PCB
	Processor_CopyInSystemStack(MAINMEMORYSIZE-1,processTable[PID].copyOfPCRegister);
	Processor_CopyInSystemStack(MAINMEMORYSIZE-2,processTable[PID].copyOfPSWRegister);
	Processor_SetAccumulator(processTable[PID].copyOfAccumulator);
	// Same thing for the MMU registers
	MMU_SetBase(processTable[PID].initialPhysicalAddress);
	MMU_SetLimit(processTable[PID].processSize);
}


// Function invoked when the executing process leaves the CPU 
void OperatingSystem_PreemptRunningProcess() {

	// Save in the process' PCB essential values stored in hardware registers and the system stack
	OperatingSystem_SaveContext(executingProcessID);
	// Change the process' state
	OperatingSystem_MoveToTheREADYState(executingProcessID,processTable[executingProcessID].queueID);
	// The processor is not assigned until the OS selects another process
	executingProcessID=NOPROCESS;
}


// Save in the process' PCB essential values stored in hardware registers and the system stack
void OperatingSystem_SaveContext(int PID) {
	
	// Load PC saved for interrupt manager
	processTable[PID].copyOfPCRegister=Processor_CopyFromSystemStack(MAINMEMORYSIZE-1);
	
	// Load PSW saved for interrupt manager
	processTable[PID].copyOfPSWRegister=Processor_CopyFromSystemStack(MAINMEMORYSIZE-2);

	processTable[PID].copyOfAccumulator=Processor_GetAccumulator();
	
}


// Exception management routine
void OperatingSystem_HandleException() {
  
	// Show message "Process [executingProcessID] has generated an exception and is terminating\n"
	//OperatingSystem_ShowTime(SYSPROC);
	//ComputerSystem_DebugMessage(71,SYSPROC,executingProcessID,programList[processTable[executingProcessID].programListIndex]->executableName);
		
	OperatingSystem_ShowTime(INTERRUPT); 
	int exception = Processor_GetException();//Exercise 2 of 4
	ComputerSystem_DebugMessage(140, INTERRUPT, executingProcessID, programList[processTable[executingProcessID].programListIndex]->executableName, exceptions[exception]);
	
	OperatingSystem_TerminateProcess();
	OperatingSystem_PrintStatus();
}


// All tasks regarding the removal of the process
void OperatingSystem_TerminateProcess() {
  
	int selectedProcess;
  	
	processTable[executingProcessID].state=EXIT;

	OperatingSystem_ShowTime(SYSPROC);
	ComputerSystem_DebugMessage(110, SYSPROC, executingProcessID, programList[processTable[executingProcessID].programListIndex]->executableName, statesNames[2], statesNames[processTable[executingProcessID].state]);
	
	OperatingSystem_ReleaseMainMemory(); //Excercise 8 of V4
	
	if (programList[processTable[executingProcessID].programListIndex]->type==USERPROGRAM) 
		// One more user process that has terminated
		numberOfNotTerminatedUserProcesses--;

	if (numberOfNotTerminatedUserProcesses==0) {
		if (executingProcessID==sipID) {
			// finishing sipID, change PC to address of OS HALT instruction
			OperatingSystem_TerminatingSIP();
			OperatingSystem_ShowTime(SHUTDOWN);
			ComputerSystem_DebugMessage(99,SHUTDOWN,"The system will shut down now...\n");
			return; // Don't dispatch any process
		}
		// Simulation must finish, telling sipID to finish
		if(numberOfProgramsInArrivalTimeQueue == 0)
			OperatingSystem_ReadyToShutdown();
	}
	// Select the next process to execute (sipID if no more user processes)
	selectedProcess=OperatingSystem_ShortTermScheduler();

	// Assign the processor to that process
	OperatingSystem_Dispatch(selectedProcess);
}

void OperatingSystem_ReleaseMainMemory()
{
    int i;
    for (i = 0; i <= PARTITIONTABLEMAXSIZE; i++){
        if (partitionsTable[i].PID == executingProcessID && partitionsTable[i].PID != NOPROCESS){
			OperatingSystem_ShowPartitionTable(allocating2[0]);	//releasing	
            partitionsTable[i].PID = NOPROCESS;
            OperatingSystem_ShowTime(SYSMEM);
            ComputerSystem_DebugMessage(145, SYSMEM, i,
                                        partitionsTable[i].initAddress, partitionsTable[i].size,
                                        executingProcessID, programList[processTable[executingProcessID].programListIndex]->executableName);
			OperatingSystem_ShowPartitionTable(allocating2[1]);
            break;
        }
    }
}

// System call management routine
void OperatingSystem_HandleSystemCall() {
  
	int systemCallID, queueID, process;

	// Register A contains the identifier of the issued system call
	systemCallID=Processor_GetRegisterA();
	
	switch (systemCallID) {
		case SYSCALL_PRINTEXECPID:
			// Show message: "Process [executingProcessID] has the processor assigned\n"
			OperatingSystem_ShowTime(SYSPROC);
			ComputerSystem_DebugMessage(72,SYSPROC,executingProcessID,programList[processTable[executingProcessID].programListIndex]->executableName);
			break;

		case SYSCALL_END:
			// Show message: "Process [executingProcessID] has requested to terminate\n"
			OperatingSystem_ShowTime(SYSPROC);
			ComputerSystem_DebugMessage(73,SYSPROC,executingProcessID,programList[processTable[executingProcessID].programListIndex]->executableName);
			OperatingSystem_TerminateProcess();
			OperatingSystem_PrintStatus();
			break;
		//ex-12
		case SYSCALL_YIELD:
			queueID = processTable[executingProcessID].queueID;
			if(numberOfReadyToRunProcesses[queueID]>0){
				process = Heap_getFirst(readyToRunQueue[queueID], numberOfReadyToRunProcesses[queueID]);
				if(process != NOPROCESS){
					if(processTable[executingProcessID].priority == processTable[process].priority){
						Heap_poll(readyToRunQueue[queueID], QUEUE_PRIORITY, &numberOfReadyToRunProcesses[queueID]);
						OperatingSystem_ShowTime(SHORTTERMSCHEDULE);
						ComputerSystem_DebugMessage(115,SHORTTERMSCHEDULE,
						executingProcessID, programList[processTable[executingProcessID].programListIndex] -> executableName, 
						process, programList[processTable[process].programListIndex] -> executableName);
						OperatingSystem_PreemptRunningProcess();
						OperatingSystem_Dispatch(process);
						OperatingSystem_PrintStatus();
					}
				}
			}
			break;
		case SYSCALL_SLEEP:
			OperatingSystem_MoveToTheBLOCKState();
			process = OperatingSystem_ShortTermScheduler();
           	OperatingSystem_Dispatch(process);
			OperatingSystem_PrintStatus();
			break;
		default: //Exercise 4 a,b,c of v4
			OperatingSystem_ShowTime(INTERRUPT);
			ComputerSystem_DebugMessage(141, INTERRUPT, executingProcessID, programList[processTable[executingProcessID].programListIndex]->executableName, systemCallID);
			OperatingSystem_TerminateProcess();
			OperatingSystem_PrintStatus();
			break;
	}

}
	
//	Implement interrupt logic calling appropriate interrupt handle
void OperatingSystem_InterruptLogic(int entryPoint){
	switch (entryPoint){
		case SYSCALL_BIT: // SYSCALL_BIT=2
			OperatingSystem_HandleSystemCall();
			break;
		case EXCEPTION_BIT: // EXCEPTION_BIT=6
			OperatingSystem_HandleException();
			break;
		case CLOCKINT_BIT: //EXCEPTION_BIT=9 //ex-2 V2
			OperatingSystem_HandleClockInterrupt();
			break;
	}

}

//ex-11
//muestra en pantalla el contenido de la cola de procesos LISTOS
//verde se refieren a identificadores de procesos (PID’s) incluidos
//	en cola y los números en color negro, serán sus prioridades.
void OperatingSystem_PrintReadyToRunQueue(){
	int i,PID,j;
	OperatingSystem_ShowTime(SHORTTERMSCHEDULE);
	ComputerSystem_DebugMessage(106,SHORTTERMSCHEDULE);
	for(i=0; i<NUMBEROFQUEUES; i++){
		if(i==USERPROCESSQUEUE) {
			if(numberOfReadyToRunProcesses[i] != 0){
				ComputerSystem_DebugMessage(112,SHORTTERMSCHEDULE);
			}
			else{
				ComputerSystem_DebugMessage(112,SHORTTERMSCHEDULE);
				ComputerSystem_DebugMessage(108,SHORTTERMSCHEDULE);
			}
			for(j=0; j<numberOfReadyToRunProcesses[i];j++){
				PID=readyToRunQueue[i][j].info;
				if(j==numberOfReadyToRunProcesses[i]-1){
					ComputerSystem_DebugMessage(107,SHORTTERMSCHEDULE,PID,processTable[PID].priority,"\n");
				}
				else{
					ComputerSystem_DebugMessage(107,SHORTTERMSCHEDULE,PID,processTable[PID].priority,",");
				}
			}
		}
		if(i==DAEMONSQUEUE) {
			if(numberOfReadyToRunProcesses[i] != 0)
				ComputerSystem_DebugMessage(113,SHORTTERMSCHEDULE);
			else{
				ComputerSystem_DebugMessage(113,SHORTTERMSCHEDULE);
				ComputerSystem_DebugMessage(108,SHORTTERMSCHEDULE);	
			}
			for(j=0; j<numberOfReadyToRunProcesses[i];j++){
				PID=readyToRunQueue[i][j].info;
				if(j==numberOfReadyToRunProcesses[i]-1){
					ComputerSystem_DebugMessage(107,SHORTTERMSCHEDULE,PID,processTable[PID].priority,"\n");
				}
				else{
					ComputerSystem_DebugMessage(107,SHORTTERMSCHEDULE,PID,processTable[PID].priority,",");
				}
			}
		}		
	}


}
//end ex-11

//ex-2 V2
// In OperatingSystem.c Exercise 2-b of V2
void OperatingSystem_HandleClockInterrupt(){ 
	int process, changeQueue, queueToExecute, unlocked;
	//ex-4 V2
	OperatingSystem_ShowTime(INTERRUPT);
	numberOfClockInterrupts++;
	ComputerSystem_DebugMessage(120, INTERRUPT, numberOfClockInterrupts);
	//ex-6 V2
	process = Heap_getFirst(sleepingProcessesQueue, numberOfSleepingProcesses);
	while(processTable[process].whenToWakeUp==numberOfClockInterrupts){
		OperatingSystem_ExtractFromBlocked();
		OperatingSystem_MoveToTheREADYState(process,processTable[executingProcessID].queueID);
		process=Heap_getFirst(sleepingProcessesQueue,numberOfSleepingProcesses);
		unlocked = 1;
	}

	
	
	if(unlocked == 1){OperatingSystem_PrintStatus();}
	
	int newProcess = OperatingSystem_LongTermScheduler(); //ex 3-a V3
	if(unlocked || newProcess > 0){ //ex 3-b V3
		queueToExecute = OperatingSystem_CheckQueue();
		if(queueToExecute != -1) {
			changeQueue = Heap_getFirst(readyToRunQueue[queueToExecute],numberOfReadyToRunProcesses[queueToExecute]);
			
			if(OperatingSystem_CheckExecutingPriority(changeQueue)){
				//ex-6 c V2
				OperatingSystem_ShowTime(SHORTTERMSCHEDULE);
				ComputerSystem_DebugMessage(121,SHORTTERMSCHEDULE,executingProcessID, programList[processTable[executingProcessID].programListIndex] -> executableName,changeQueue,programList[processTable[changeQueue].programListIndex] -> executableName);
				OperatingSystem_PreemptRunningProcess();
				OperatingSystem_Dispatch(OperatingSystem_ShortTermScheduler());
				OperatingSystem_PrintStatus();  
			}
		}
	}else {
		if(OperatingSystem_IsThereANewProgram() == NO){
			OperatingSystem_ReadyToShutdown();
		}

	}

}
//end ex-2 V2



int OperatingSystem_ExtractFromBlocked() {
	int selectedProcess=NOPROCESS;
	selectedProcess=Heap_poll(sleepingProcessesQueue,QUEUE_WAKEUP ,&numberOfSleepingProcesses);
	
	return selectedProcess; 
}

int OperatingSystem_CheckQueue(){
	if (numberOfReadyToRunProcesses[USERPROCESSQUEUE] > 0) 
		return USERPROCESSQUEUE;
	else if (numberOfReadyToRunProcesses[DAEMONSQUEUE] > 0)
		return DAEMONSQUEUE;
	return -1;
}

int OperatingSystem_CheckExecutingPriority(int process){
	
	if((processTable[executingProcessID].queueID == processTable[process].queueID && 
		processTable[process].priority < processTable[executingProcessID].priority) || 
	   (processTable[executingProcessID].queueID != processTable[process].queueID && 
		processTable[executingProcessID].queueID == DAEMONSQUEUE))
		return 1;
	else 
		return 0;
}

//ex-5 V2
void OperatingSystem_MoveToTheBLOCKState(){
	if(Heap_add(executingProcessID, sleepingProcessesQueue, QUEUE_WAKEUP, &numberOfSleepingProcesses, PROCESSTABLEMAXSIZE)>=0){
		processTable[executingProcessID].state=BLOCKED;
		processTable[executingProcessID].whenToWakeUp = abs(Processor_GetAccumulator())+numberOfClockInterrupts+1;
		OperatingSystem_ShowTime(SYSPROC);
		ComputerSystem_DebugMessage(110, SYSPROC, executingProcessID, programList[processTable[executingProcessID].programListIndex]->executableName, statesNames[2], statesNames[3]);
		OperatingSystem_SaveContext(executingProcessID);
	}
}
//end ex-5 V2

//ex-1 V3
int OperatingSystem_GetExecutingProcessID() {
	return executingProcessID;
}
//end ex-1 V3