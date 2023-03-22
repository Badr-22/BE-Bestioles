#include "BestioleDecorator.h"

BestioleDecorator::BestioleDecorator(AbstractBestiole* bestiole)
{

   this->bestiole = bestiole;

}

int BestioleDecorator::get_vitesse()
{
   return this->get_vitesse();
}

int BestioleDecorator::get_camouflage()
{
   return this->get_camouflage();
}

int BestioleDecorator::get_prob_mort()
{
   return this->get_prob_mort();
}