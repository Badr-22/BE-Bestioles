#ifndef _BESTIOLE_DECORATOR_H
#define _BESTIOLE_DECORATOR_H


#include "UImg.h"
#include <iostream>

using namespace std;

class BestioleDecorator : public AbstractBestiole
{

protected :
   AbstractBestiole *bestiole;
   BestioleDecorator(AbstractBestiole* brestiole);

   int get_vitesse();
   int get_prob_mort();
   int get_camouflage();

};


#endif
