#include "iAd.h"

void iAd_Config()
{
  //Utilisation de la PIN RA0 en Analogique
  ANSELbits.AN0 = 1;

  //Sélection du canal de configuration
  ADCON0bits.CHS = 0b000;

  //Configuration de la fréquence de conversion
  ADCON1bits.ADCS = 0b010; //Période de  2 us pour ADC

  //Format de la conversion justifié à droite
  ADCON0bits.ADFM = 1;

  //Tension de référence au GND
  ADCON0bits.VCFG =0b00;

}
bool iAd_StartMesure()
{
  //Activation de la conversion
    ADCON0bits.ADON=1;
    return true;
}
bool iAd_MesureComplete()
{

}
UChar iAd_GetResult()
{

}
