#ifndef _BESTIOLES_H_
#define _BESTIOLES_H_


#include "UImg.h"

#include "Comportement.h"
#include "Comportement/Kamikaze.h"
#include "Comportement/Peureuse.h"
#include "Comportement/Gregaire.h"
#include "Comportement/Prevoyante.h"

#include <iostream>

using namespace std;


class Milieu;


class Bestiole
{

private :
   static const double     AFF_SIZE;
   static const double     MAX_VITESSE;
   static const double     LIMITE_VUE;

   static int              next;

private :
   int               identite;
   int               x, y;
   double            cumulX, cumulY;
   double            orientation;
   double            vitesse;
   
   Comportement* comportement;

   

private :
   void bouge( int xLim, int yLim );

public :                                           // Forme canonique :
   Bestiole( void );                               // Constructeur par defaut
   Bestiole(Comportement* comp);
   Bestiole( const Bestiole & b);                 // Constructeur de copies
   ~Bestiole( void );                              // Destructeur
                                                   // Operateur d'affectation binaire par defaut
   void action( Milieu & monMilieu );
   void draw( UImg & support );

   bool jeTeVois( const Bestiole & b ) const;

   void initCoords( int xLim, int yLim );

   friend bool operator==( const Bestiole & b1, const Bestiole & b2 );

   void agir();

   T               * couleur;

   // void useComportement(Bestiole& b, std::vector<Bestiole>& list);

};


#endif
