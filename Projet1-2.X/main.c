/* 
 * File:   main.c
 * Author: mohammed.bensalah
 *
 * Created on 12. mars 2015, 11:11
 */

#include <stdio.h>
#include <stdlib.h>
#include <pic16f914.h>
#include "def.h"
#include "iCpu.h"
#include "iPWM.h"
#include "mPWM.h"
#include "iAd.h"

/*
 * 
 */
int main(int argc, char** argv)
{
    float vcc = 5;
    float valUmoy = 4.8;
    int ValCCP = 204;
    
    iCpu_Config();
    iPWM_Config();
    iAd_Config();
    
   // while(1)
       // iPWM_SetDutyCycle(ValCCP);
   // mPWM_SetTension(valUmoy, vcc);
    iPWM_SetDutyCycle(512);
    
    //Algorithme de mesure 
    //Test de mesure.
  
}

