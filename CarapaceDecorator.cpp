#include "CarapaceDecorator.h"

CarapaceDecorator::CarapaceDecorator(AbstractBestiole* bestiole)
{

   this->bestiole = bestiole;

}

int CarapaceDecorator::get_vitesse()
{
   return this->get_vitesse()/coeff_vit;
}

int CarapaceDecorator::get_camouflage()
{
   return this->get_camouflage();
}

int CarapaceDecorator::get_prob_mort()
{
   return this->get_prob_mort()/coeff_res;
}