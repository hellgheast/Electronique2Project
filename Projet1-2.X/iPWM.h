/* 
 * File:   iPWM.h
 * Author: vincent.meier
 *
 * Created on 7. mai 2015, 10:07
 */

#ifndef IPWM_H
#define	IPWM_H

#include <pic16f914.h>
#include "def.h"

// Configure le PWM, par défaut à 50%
void iPWM_Config();

// Modifie le rapport de PWM.
// ValCCP est la valeur 10 bits à entrer
// dans les registres CCP1CON et CCPR1L
void iPWM_SetDutyCycle(int ValCCP);

#endif	/* IPWM_H */

