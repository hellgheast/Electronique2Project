#include "iInterrupt.h"
#include <pic16f914.h>

/*Enable des interrupts*/
void iInterrupt_GlobalEnable()
{
    INTCONbits.GIE = 1;
}
void iInterrupt_PeriphEnable()
{
    INTCONbits.PEIE = 1;
}
void iInterrupt_TMR0Enable()
{
    INTCONbits.T0IE = 1;
}
void iInterrupt_ExternalEnable()
{
    INTCONbits.INTE = 1;
}
void iInterrupt_PortBEnable()
{
    INTCONbits.RBIE = 1;
}

/*Enable des interruptions périphériques*/
void iInterrupt_pEEIEnable()
{
    PIE1bits.EEIE =1;
}
void iInterrupt_pADIEnable()
{
    PIE1bits.ADIE =1;
}
void iInterrupt_pRCIEnable()
{
    PIE1bits.RCIE =1;
}
void iInterrupt_pTXIEnable()
{
    PIE1bits.TXIE =1;
}
void iInterrupt_pSSPIEnable();
void iInterrupt_pCCP1IEnable();
void iInterrupt_pSSPIEnable();

/*Récupération des flags*/
bool iInterrupt_TMR0Flag()
{
    if(INTCONbits.T0IF !=0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool iInterrupt_ExternalFlag()
{
    if(INTCONbits.INTF)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool iInterrupt_PortBFlag()
{
  if(INTCONbits.RBIF != 0)
  {
      return true;
  }
  else
  {
      return false;
  }
}