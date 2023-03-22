#include "NageoireDecorator.h"

NageoireDecorator::NageoireDecorator(AbstractBestiole* bestiole)
{

   this->bestiole = bestiole;

}

int NageoireDecorator::get_vitesse()
{
   return this->get_vitesse()*coeff_vit;
}

int NageoireDecorator::get_camouflage()
{
   return this->get_camouflage();
}

int NageoireDecorator::get_prob_mort()
{
   return this->get_prob_mort();
}