#include "iPWM.h"
#include "mPWM.h"



// Modifie le pourcentage du rapport PWM
// Procent est le pourcentage souhaité
// allant de 1 à 99
void mPWM_SetRatio(int procent){

    int valCCP = (procent*1024)/100; // Conversion de % à valeur sur 10 bits
    iPWM_SetDutyCycle(valCCP);

}


// Modifie la tension moyenne
// u_moy est la tension désirée (à une décimale maximum)
void mPWM_SetTension(float u_moy, float vcc){

    int procent = (int)(u_moy/vcc)*100;
    mPWM_SetRatio(procent);

}