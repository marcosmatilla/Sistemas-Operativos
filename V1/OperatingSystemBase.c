#include "OperatingSystemBase.h"
#include "OperatingSystem.h"
#include "Processor.h"
#include "Buses.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Code that students should NOT touch

// Functions prototypes
int OperatingSystem_lineBeginsWithANumber(char *);

extern int initialPID;

// Search for a free entry in the process table. The index of the selected entry
// will be used as the process identifier
int OperatingSystem_ObtainAnEntryInTheProcessTable() {

	int orig=initialPID%PROCESSTABLEMAXSIZE;
	int index=0;
	int entry;

	while (index<PROCESSTABLEMAXSIZE) {
		entry = (orig+index)%PROCESSTABLEMAXSIZE;
		if (processTable[entry].busy==0)
			return entry;
		else
			index++;
	}
	return NOFREEENTRY;
}


// Returns the size of the program, stored in the program file
int OperatingSystem_ObtainProgramSize(FILE **programFile, char *program) {

	char lineRead[MAXLINELENGTH];
	int isComment=1;
	int programSize;
	
	*programFile= fopen(program, "r");
	
	// Check if programFile exists
	if (*programFile==NULL)
		return PROGRAMDOESNOTEXIST;

	// Read the first number as the size of the program. Skip all comments.
	while (isComment==1) {
		if (fgets(lineRead, MAXLINELENGTH, *programFile) == NULL)
		    return PROGRAMNOTVALID;
		else
		    if (lineRead[0]!='/' && lineRead[0]!='\n' && lineRead[0]!='\r') { // Line IS NOT a comment and IS NOT empty
			    isComment=0;
			    if (OperatingSystem_lineBeginsWithANumber(lineRead))
					programSize=atoi(strtok(lineRead," "));
			    else
					return PROGRAMNOTVALID;
		    }
	}
	// Only sizes above 0 are allowed
	if (programSize<=0)
	    return PROGRAMNOTVALID;
	else
	    return programSize;
}


// Returns the priority of the program, stored in the program file
int OperatingSystem_ObtainPriority(FILE *programFile) {

	char lineRead[MAXLINELENGTH];
	int isComment=1;
	int processPriority;
	
	// Read the second number as the priority of the program. Skip all comments.
	while (isComment==1) {
		if (fgets(lineRead, MAXLINELENGTH, programFile) == NULL)
			return PROGRAMNOTVALID;
		else
		    if (lineRead[0]!='/' && lineRead[0]!='\n' && lineRead[0]!='\r') { // Line IS NOT a comment and IS NOT empty
			    isComment=0;
			    if (OperatingSystem_lineBeginsWithANumber(lineRead))
					processPriority=atoi(strtok(lineRead," "));
			    else
					return PROGRAMNOTVALID;
		      }
	}
	return processPriority;
}


// Function that processes the contents of the file named by the first argument
// in order to load it in main memory from the address given as the second
// argument
// IT IS NOT NECESSARY TO COMPLETELY UNDERSTAND THIS FUNCTION

int OperatingSystem_LoadProgram(FILE *programFile, int initialAddress, int size) {

	char lineRead[MAXLINELENGTH];
	char *token0, *token1, *token2;
	BUSDATACELL data;
	int nbInstructions = 0;
	int opCode;
	int op1, op2;

	Processor_SetMAR(initialAddress);
	while (fgets(lineRead, MAXLINELENGTH, programFile) != NULL) {
		// REMARK: if lineRead is greater than MAXLINELENGTH in number of characters, the program
		// loading does not work
		opCode=op1=op2=0;
		token0=strtok(lineRead," \n\t");
		if (token0!=NULL && token0[0]!='/' && token0[0]!='\n' && token0[0]!='\r') {
			// I have an instruction with, at least, an operation code
			opCode=Processor_ToInstruction(token0);
			token1=strtok(NULL," ");
			if (token1!=NULL && token1[0]!='/') {
				// I have an instruction with, at least, an operand
			    op1=atoi(token1);
				token2=strtok(NULL," ");
				if (token2!=NULL && token2[0]!='/') {
					// The read line is similar to 'ADD 2 3 //coment'
					// I have an instruction with two operands
				  	op2=atoi(token2);
				}
			}
			
			// More instructions than size...
			if (++nbInstructions > size){
				return TOOBIGPROCESS;
			}

		    data.cell=Processor_Encode(opCode,op1,op2);
			Processor_SetMBR(&data);
			// Send data to main memory using the system buses
			Buses_write_DataBus_From_To(CPU, MAINMEMORY);
			Buses_write_AddressBus_From_To(CPU, MAINMEMORY);
			// Tell the main memory controller to write
			Processor_SetCTRL(CTRLWRITE);
			Buses_write_ControlBus_From_To(CPU,MAINMEMORY);
			Processor_SetMAR(Processor_GetMAR()+1);
		}
	}
	return SUCCESS;
}


// Auxiliar for check that line begins with positive number
int OperatingSystem_lineBeginsWithANumber(char * line) {
	int i;
	
	for (i=0; i<strlen(line) && line[i]==' '; i++); // Don't consider blank spaces
	// If is there a digit number...
	if (i<strlen(line) && isdigit(line[i]))
		// It's a positive number
		return 1;
	else
		return 0;
}


void OperatingSystem_ReadyToShutdown(){
	// Simulation must finish (done by modifying the PC of the System Idle Process so it points to its 'TRAP 3' instruction,
	// located at the last memory position used by that process, and dispatching sipId (next ShortTermSheduled)
	processTable[sipID].copyOfPCRegister=processTable[sipID].initialPhysicalAddress+processTable[sipID].processSize-1;
}

void OperatingSystem_TerminatingSIP() {
	Processor_CopyInSystemStack(MAINMEMORYSIZE-1,OS_address_base+1);
}
