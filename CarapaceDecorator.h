#ifndef _CARAPACE_DECORATOR_H
#define _CARAPACE_DECORATOR_H

#include <iostream>

using namespace std;

class CarapaceDecorator : public BestioleDecorator
{

protected :
   static const double COEFF_VIT_MAX;
   static const double COEFF_RES_MAX;

   int coeff_vit;
   int coeff_res;
};


#endif
