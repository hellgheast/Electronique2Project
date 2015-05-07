#include "iCpu.h"


void iCpu_Config(void)
{
   //Sélection du registre d'oscillateur
    OSCCONbits.IRCF = 0b111;//Oscillateur interne à 8 MHz
    OSCCONbits.OSTS = 0;//Sélection de l'oscillateur interne
    OSCCONbits.SCS = 0;
    
}
