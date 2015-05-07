#include "iDio.h"
void iDio_Config()
{
    TRISA = 0x00;
    TRISAbits.TRISA6 = 1;
    TRISAbits.TRISA7 = 1;
    //Entrée pour l'oscillateur
    TRISB = 0x00;
    TRISBbits.TRISB6 = 1;
    TRISBbits.TRISB7 = 1;
    //RB7 et RB6 en entrée
    
    WPUBbits.WPUB7 = 1;
    WPUBbits.WPUB6 = 1;
    //Configuration des pull-ups
    TRISC = 0x00;
    TRISCbits.TRISC0=1;
    TRISCbits.TRISC1=1;
    TRISCbits.TRISC2=1;
    //RC0 -> RC2 en entrée

}