#include "Aquarium.h"
#include "Milieu.h"
#include "Bestiole.h"

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;


int main()
{

   Aquarium       ecosysteme( 640, 480, 30 );
   Milieu& eau = ecosysteme.getMilieu();

   // Comportement* comportement;

   // Création des comportements
   std::vector<Comportement*> comportements = {
        new Kamikaze(),
        new Peureuse(),
        new Gregaire(),
        new Prevoyante()
    };


   for ( int i = 1; i <= 20; ++i ){
      int index_comportement = rand() % comportements.size();
      Bestiole b(comportements[index_comportement]);
      eau.addMember(b);
   
   }
   ecosysteme.run();

   // Libération de la mémoire allouée aux comportements
   //  for (auto comp : comportements) {
   //      delete comp;
   //  }

   return 0;

}
