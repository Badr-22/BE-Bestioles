#include "Bestiole.h"

#include "Milieu.h"

#include <cstdlib>
#include <cmath>


const double      Bestiole::AFF_SIZE = 8.;
const double      Bestiole::MAX_VITESSE = 10.;
const double      Bestiole::LIMITE_VUE = 30.;

int               Bestiole::next = 0;


Bestiole::Bestiole(void)
{

   identite = ++next;
   // b.Comportement->agir();

   cout << "const Bestiole (" << identite << ") par defaut" << endl;

   x = y = 0;
   cumulX = cumulY = 0.;
   orientation = static_cast<double>( rand() )/RAND_MAX*2.*M_PI;
   vitesse = static_cast<double>( rand() )/RAND_MAX*MAX_VITESSE;

   couleur = new T[ 3 ];
   couleur[ 0 ] = static_cast<int>( static_cast<double>( rand() )/RAND_MAX*0. );
   couleur[ 1 ] = static_cast<int>( static_cast<double>( rand() )/RAND_MAX*0. );
   couleur[ 2 ] = static_cast<int>( static_cast<double>( rand() )/RAND_MAX*0. );

}

Bestiole::Bestiole( Comportement* comp )
{

   identite = ++next;
   // comp->agir(this);
   comportement = comp;
   
   //comportement(comp)
   cout << "const Bestiole (" << identite << ") a un comportement avec adresse " << comp << endl;

   x = y = 0;
   cumulX = cumulY = 0.;
   orientation = static_cast<double>( rand() )/RAND_MAX*2.*M_PI;
   vitesse = static_cast<double>( rand() )/RAND_MAX*MAX_VITESSE;

   couleur = new T[ 3 ];
   couleur[ 0 ] = static_cast<int>( static_cast<double>( rand() )/RAND_MAX*0. );
   couleur[ 1 ] = static_cast<int>( static_cast<double>( rand() )/RAND_MAX*0. );
   couleur[ 2 ] = static_cast<int>( static_cast<double>( rand() )/RAND_MAX*0. );

}


// Bestiole::Bestiole(comportement, string couleur)
// {
//    this->comportement = comportement;

//    this-> couleur = new T[ 3 ];
//    if (couleur== "marron") {
//        this->couleur[ 0 ] = 96;
//        this->couleur[ 1 ] = 64;
//        this->couleur[ 2 ] = 32;
//    };

// }



Bestiole::Bestiole( const Bestiole & b)
{

   identite = ++next;
   comportement = b.comportement;

   cout << "const Bestiole (" << identite << ") par copie" << endl;

   x = b.x;
   y = b.y;
   cumulX = cumulY = 0.;
   orientation = b.orientation;
   vitesse = b.vitesse;
   couleur = new T[ 3 ];
   memcpy( couleur, b.couleur, 3*sizeof(T) );

}


Bestiole::~Bestiole( void )
{

   delete[] couleur;
   // delete comportement;

   cout << "dest Bestiole" << endl;
   
}


void Bestiole::initCoords( int xLim, int yLim )
{

   x = rand() % xLim;
   y = rand() % yLim;

}


void Bestiole::bouge( int xLim, int yLim )
{

   double         nx, ny;
   double         dx = cos( orientation )*vitesse;
   double         dy = -sin( orientation )*vitesse;
   int            cx, cy;


   cx = static_cast<int>( cumulX ); cumulX -= cx;
   cy = static_cast<int>( cumulY ); cumulY -= cy;

   nx = x + dx + cx;
   ny = y + dy + cy;

   if ( (nx < 0) || (nx > xLim - 1) ) {
      orientation = M_PI - orientation;
      cumulX = 0.;
   }
   else {
      x = static_cast<int>( nx );
      cumulX += nx - x;
   }

   if ( (ny < 0) || (ny > yLim - 1) ) {
      orientation = -orientation;
      cumulY = 0.;
   }
   else {
      y = static_cast<int>( ny );
      cumulY += ny - y;
   }

}


void Bestiole::action( Milieu & monMilieu )
{

   bouge( monMilieu.getWidth(), monMilieu.getHeight() );

}


void Bestiole::draw( UImg & support )
{

   double         xt = x + cos( orientation )*AFF_SIZE/2.1;
   double         yt = y - sin( orientation )*AFF_SIZE/2.1;


   support.draw_ellipse( x, y, AFF_SIZE, AFF_SIZE/5., -orientation/M_PI*180., couleur );
   support.draw_circle( xt, yt, AFF_SIZE/2., couleur );

}


bool operator==( const Bestiole & b1, const Bestiole & b2 )
{

   return ( b1.identite == b2.identite );

}


bool Bestiole::jeTeVois( const Bestiole & b ) const
{

   double         dist;


   dist = std::sqrt( (x-b.x)*(x-b.x) + (y-b.y)*(y-b.y) );
   return ( dist <= LIMITE_VUE );

}

void Bestiole::agir()
{

   cout<<"La bestiole bouge !"<<endl;
   comportement-> agir(this);
}


// void Bestiole::useComportement(Bestiole& b, std::vector<Bestiole>& list) {
   //  if(this->multiple) {
   //      double alea = static_cast<double>(rand()) / RAND_MAX;
   //      if (alea < 0.25) {
   //          shared_ptr<Gregaire> gregairePtr(new Gregaire());
   //          this->comportement = gregairePtr;
   //      } else if (alea < 0.5) {
   //          shared_ptr<Peureuse> peureusePtr(new Peureuse());
   //          this->comportement = peureusePtr;
   //      } else if (alea < 0.75) {
   //          shared_ptr<Kamikaze> kamikazePtr(new Kamikaze());
   //          this->comportement = kamikazePtr;
   //      } else if (alea < 1) {
   //          shared_ptr<Prevoyante> prevoyantePtr(new Prevoyante());
   //          this->comportement = prevoyantePtr;
   //      }
   //  }
   // comportement->agir(Bestiole& b, std::vector<Bestiole>& list);
   // comportement->agir(Bestiole& b, std::vector<Bestiole>& list);
   // Kamikaze();
//    this->useComportement() = new Kamikaze();
// }