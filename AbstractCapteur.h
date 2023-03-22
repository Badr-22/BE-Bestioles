#ifndef _ABSTRACT_CAPTEUR_H_
#define _ABSTRACT_CAPTEUR_H_

#include <iostream>

using namespace std;

class AbstractCapteur
{

protected :
   static const double     CHAMP_VISION_MAX;
   static const double     CHAMP_VISION_MIN;
   static const double     DISTANCE_MAX;
   static const double     DISTANCE_MIN;
   static const double     CAPACITE_DETECTION_MAX;
   static const double     CAPACITE_DETECTION_MIN;

   double champ_vision;
   double distance;
   double capacite_detection;

   virtual double get_champ_vision()=0;
   virtual double get_capacite_detection()=0;
   virtual double get_distance()=0;

};


#endif
