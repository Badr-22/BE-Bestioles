#ifndef _CAMOUFLAGE_DECORATOR_H
#define _CAMOUFLAGE_DECORATOR_H

#include <iostream>

using namespace std;

class CamouflageDecorator : public BestioleDecorator
{

protected :
   static const double CAM_MAX;
   static const double CAM_MIN;

   int cam;
};


#endif
