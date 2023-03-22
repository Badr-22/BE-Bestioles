#include "CamouflageDecorator.h"

CamouflageDecorator::CamouflageDecorator(AbstractBestiole* bestiole)
{

   this->bestiole = bestiole;

}

int CamouflageDecorator::get_vitesse()
{
   return this->get_vitesse();
}

int CamouflageDecorator::get_camouflage()
{
   return this->get_camouflage()*cam;
}

int CamouflageDecorator::get_prob_mort()
{
   return this->get_prob_mort();
}