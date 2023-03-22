#include "Oreilles.h"

Oreilles::Oreilles(double champ_vision,double distance, double capacite_detection)
{

   this->champ_vision = champ_vision;
   this->distance = distance;
   this->capacite_detection = capacite_detection;

}

double Oreilles::get_champ_vision()
{
   return this->champ_vision;
}

double Oreilles::get_distance()
{
   return this->distance;
}

double Oreilles::get_capacite_detection()
{
   return this->capacite_detection;
}