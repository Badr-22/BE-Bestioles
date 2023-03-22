#ifndef _YEUX_H_
#define _YEUX_H_

#include <iostream>

using namespace std;

class Yeux : public AbstractCapteur
{

protected :

   double get_champ_vision();
   double get_capacite_detection();
   double get_distance();

};


#endif
