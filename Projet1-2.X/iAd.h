/* 
 * File:   iAd.h
 * Author: mohammed.bensalah
 *
 * Created on 26. mars 2015, 11:48
 */

#ifndef __IAD__
#define	__IAD__
#include <pic16f914.h>
#include "def.h"

void iAd_Config();
bool iAd_StartMesure();
bool iAd_MesureComplete();
UChar iAd_GetResult();

#endif	/* IAD_H */

