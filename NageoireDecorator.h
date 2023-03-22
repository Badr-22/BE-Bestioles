#ifndef _NAGEOIRE_DECORATOR_H
#define _NAGEOIRE_DECORATOR_H

#include <iostream>

using namespace std;

class NageoireDecorator : public BestioleDecorator
{

protected :
   static const double COEFF_VIT_MAX;

   int coeff_vit;
};


#endif
