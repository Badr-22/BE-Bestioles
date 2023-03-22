#include "Yeux.h"

Yeux::Yeux(double champ_vision,double distance, double capacite_detection)
{

   this->champ_vision = champ_vision;
   this->distance = distance;
   this->capacite_detection = capacite_detection;

}

double Yeux::get_champ_vision()
{
   return this->champ_vision;
}

double Yeux::get_distance()
{
   return this->distance;
}

double Yeux::get_capacite_detection()
{
   return this->capacite_detection;
}