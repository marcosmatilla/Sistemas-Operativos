#include "Clock.h"
#include "Processor.h"
#include "ComputerSystemBase.h"

int tics=0;


void Clock_Update() {

	tics++;
    // ComputerSystem_DebugMessage(97,CLOCK,tics);
	if((tics > 0) && (tics%INTERVALBETWEENINTERRUPS==0)) //cambiar nombre de la constante
		Processor_RaiseInterrupt(CLOCKINT_BIT);
}


int Clock_GetTime() {

	return tics;
}
