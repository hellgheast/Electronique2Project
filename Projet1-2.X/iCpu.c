#include "iCpu.h"
void iCpu_Config()
{
   //Sélection du registre d'oscillateur
    OSCCONbits_t.IRCF = 0b111;//Oscillateur interne à 8 MHz
    OSCCONbits_t.OSTS = 0;//Sélection de l'oscillateur interne
    OSCCONbits_t.SCS = 0;
}
