#include "iCpu.h"
void iCpu_Config()
{
   //S�lection du registre d'oscillateur
    OSCCONbits_t.IRCF = 0b111;//Oscillateur interne � 8 MHz
    OSCCONbits_t.OSTS = 0;//S�lection de l'oscillateur interne
    OSCCONbits_t.SCS = 0;
}
