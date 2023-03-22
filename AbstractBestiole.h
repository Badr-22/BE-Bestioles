#ifndef _ABSTRACT_BESTIOLE_H_
#define _ABSTRACT_BESTIOLE_H_


#include "UImg.h"
#include <iostream>

using namespace std;

class AbstractBestiole
{

protected :

   virtual int get_vitesse()=0;
   virtual int get_prob_mort()=0;
   virtual int get_camouflage()=0;

};


#endif
