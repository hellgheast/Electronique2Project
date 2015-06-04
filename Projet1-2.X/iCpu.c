#include "iCpu.h"


void iCpu_Config(void)
{
    
    // PIC16F914 Configuration Bit Settings

    // CONFIG
    #pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator: High-speed crystal/resonator on RA6/OSC2/CLKOUT/T1OSO and RA7/OSC1/CLKIN/T1OSI)
    #pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled and can be enabled by SWDTEN bit of the WDTCON register)
    #pragma config PWRTE = OFF      // Power Up Timer Enable bit (PWRT disabled)    
    #pragma config MCLRE = ON       // RE3/MCLR pin function select bit (RE3/MCLR pin function is MCLR)
    #pragma config CP = OFF         // Code Protection bit (Program memory code protection is disabled)
    #pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)
    #pragma config BOREN = ON       // Brown-out Reset Selection bits (BOR enabled)
    #pragma config IESO = ON        // Internal External Switchover bit (Internal/External Switchover mode is enabled)
    #pragma config FCMEN = ON       // Fail-Safe Clock Monitor Enabled bit (Fail-Safe Clock Monitor is enabled)
    
   //Sélection du registre d'oscillateur
    OSCCONbits.IRCF = 0b111;//Oscillateur interne à 8 MHz
    OSCCONbits.OSTS = 0;//Sélection de l'oscillateur interne
    OSCCONbits.SCS = 0;
   
}
