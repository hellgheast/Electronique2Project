#include "iPWM.h"

// Configure le PWM, par défaut à 50%
void iPWM_Config()
{
    // Period
        PR2 = 0xFF;

    // Duty Cycle
        CCPR1L = 128;

        CCP1CONbits.CCP1X = 0;
        CCP1CONbits.CCP1Y = 0;

    // RC5/T1CKI/CCP1/SEG10 as output
        TRISC5 = 0;

    // TMR2 config
        T2CONbits.TOUTPS = 0; // Postscaler = 1:1
        T2CONbits.TMR2ON = 1; // Timer 2 ON
        T2CONbits.T2CKPS1 = 1;// Prescaler = 1:16

    // CCP1 module
        CCP1CONbits.CCP1M3 = 1;
        CCP1CONbits.CCP1M2 = 1;
}

// Modifie le rapport de PWM.
// ValCCP est la valeur 10 bits à entrer
// dans les registres CCP1CON et CCPR1L
void iPWM_SetDutyCycle(int ValCCP){

    CCPR1L = (ValCCP >> 2) & 0xFF; // On ne prend que les 8 derniers bits de ValCCP
    CCP1CONbits.CCP1M3 = ValCCP & 0x02; // On ne prend que le deuxième bit de ValCCP
    CCP1CONbits.CCP1M2 = ValCCP & 0x01; // On ne prend que le premier bit de ValCCP
    
}
