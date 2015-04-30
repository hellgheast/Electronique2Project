#include "iDio.h"
void iDio_Config()
{
    TRISA = 0x00;
    TRISAbits_t.TRISA6 = 1;
    TRISAbits_t.TRISA7 = 1;
    //Entr�e pour l'oscillateur
    TRISB = 0x00;
    TRISBbits_t.TRISB6 = 1;
    TRISBbits_t.TRISB7 = 1;
    //RB7 et RB6 en entr�e
    
    WPUBbits_t.WPUB7 = 1;
    WPUBbits_t.WPUB6 = 1;
    //Configuration des pull-ups
    TRISC = 0x00;
    TRISCbits_t.TRISC0=1;
    TRISCbits_t.TRISC1=1;
    TRISCbits_t.TRISC2=1;
    //RC0 -> RC2 en entr�e

    TRISD = 0x00;
    //PORTD en sorti�e

    TRISE = 0x00;
    //PORTD en sorti�e

}