/* 
 * File:   iInterrupt.h
 * Author: mohammed.bensalah
 *
 * Created on 7. mai 2015, 11:19
 */

#ifndef __IINTERRUPT__
#define	__IINTERRUPT__

#include "def.h"

/*Enable des interrupts*/
void iInterrupt_GlobalEnable();
void iInterrupt_PeriphEnable();
void iInterrupt_TMR0Enable();
void iInterrupt_ExternalEnable();
void iInterrupt_PortBEnable();


/*Enable des interruptions périphériques*/
void iInterrupt_pEEIEnable();
void iInterrupt_pADIEnable();
void iInterrupt_pRCIEnable();
void iInterrupt_pTXIEnable();
void iInterrupt_pSSPIEnable();
void iInterrupt_pCCP1IEnable();
void iInterrupt_pSSPIEnable();

/*Récupération des flags*/
bool iInterrupt_TMR0Flag();
bool iInterrupt_ExternalFlag();
bool iInterrupt_PortBFlag();


#endif	/* IINTERRUPT_H */

