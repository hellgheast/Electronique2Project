#include "iPWM.h"
#include "mPWM.h"

// Modifie le pourcentage du rapport PWM
// Procent est le pourcentage souhait�
// allant de 1 � 99
void mPWM_SetRation(int Procent){

    int ValCCP = (Procent*1024)/100; // Conversion de % � valeur sur 10 bits
    iPWM_SetDutyCycle(ValCCP);

}