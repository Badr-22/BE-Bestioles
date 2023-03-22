#ifndef _OREILLES_H_
#define _OREILLES_H_

#include <iostream>

using namespace std;

class Oreilles : public AbstractCapteur
{

protected :
   static const double     CHAMP_VISION_MAX = 3.14;
   static const double     CHAMP_VISION_MIN = 0;

   double get_champ_vision();
   double get_capacite_detection();
   double get_distance();

};


#endif
