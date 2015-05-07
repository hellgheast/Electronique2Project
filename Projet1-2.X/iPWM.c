#include "iPWM.h"

void iPWM_Config()
{
    T2CONbits_t.TOUTPS = 0; // Postscaler = 1:1
    T2CONbits_t.TMR2ON = 1; // Timer 2 ON
    T2CONbits_t.T2CKPS1 = 1;// Prescaler = 1:16
    //T2CONbits_t.T2CKPS0 = x; // Non influencable

    PR2 = 0XFF;
    
}
