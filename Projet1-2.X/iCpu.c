#include "iCpu.h"


void iCpu_Config(void)
{
   //S�lection du registre d'oscillateur
    OSCCONbits.IRCF = 0b111;//Oscillateur interne � 8 MHz
    OSCCONbits.OSTS = 0;//S�lection de l'oscillateur interne
    OSCCONbits.SCS = 0;
    
}
