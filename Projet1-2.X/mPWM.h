/* 
 * File:   mPWM.h
 * Author: vincent.meier
 *
 * Created on 7. mai 2015, 11:31
 */

#ifndef MPWM_H
#define	MPWM_H

// Modifie le pourcentage du rapport PWM
// Procent est le pourcentage souhait�
// allant de 1 � 99
void mPWM_SetRation(int Procent);


// Modifie la tension moyenne
// u_moy est la tension d�sir�e (� une d�cimale maximum)
void mPWM_SetTension(float u_moy, float vcc);

#endif	/* MPWM_H */

