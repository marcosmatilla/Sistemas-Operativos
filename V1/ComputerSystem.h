#ifndef COMPUTERSYSTEM_H
#define COMPUTERSYSTEM_H

#include "Simulator.h"
#include "ComputerSystemBase.h"

// Functions prototypes
void ComputerSystem_PowerOn(int argc, char *argv[], int);
void ComputerSystem_PowerOff();

// Sections in which we divide our simulator in terms of
// debugging messages that show its internal working details

#define ALL 'a'         // Show all the messages corresponding to calls to the  ComputerSystem_DebugMessage() function
#define NONE 'n'        // Do not show any message (not apply for ERROR messages)
#define INTERRUPT 'i'   // Only messages related to interruptions
#define HARDWARE 'h'    // Only messages related to the hardware
#define SYSFILE 'f'     // Only messages related to the file system of the operating system
#define SYSPROC 'p'     // Only messages related to the process management system of the operating system
#define SYSMEM 'm'      // Only messages related to the memory management system of the operating system
#define INIT 't'        // Only messages related to the initialization of the operating system
#define SHUTDOWN 'd'            // Only messages related to the process of powering off the simulator
#define POWERON 'o'				// Only messages related to the process of powering on the simulator
#define LONGTERMSCHEDULE 'l'    // Only messages related to the long term scheduler of the operating system
#define SHORTTERMSCHEDULE 's'   // Only messages related to the short term scheduler of the operating system
#define ERROR 'e'				// Error messages
#define CLOCK 'c'				// Clock time messages

// Basic data to collect about every program to be created
// User programs specified in the command line: name of the file, the time of its arrival time
// 												to the system (0, by default), and type USERPROGRAM
// Daemon programs of type DAEMONPROGRAM
typedef struct ProgramData {
    char *executableName;
    unsigned int arrivalTime;
    unsigned int type;
} PROGRAMS_DATA;

// This "extern" declarations enables other source code files to gain access
// to the variables "programList", etc.
extern PROGRAMS_DATA *programList[PROGRAMSMAXNUMBER];

#endif
