#include "Milieu.h"

#include <cstdlib>
#include <ctime>



const T    Milieu::white[] = { (T)255, (T)255, (T)255 };


Milieu::Milieu( int _width, int _height ) : UImg( _width, _height, 1, 3 ),
                                            width(_width), height(_height)
{

   cout << "const Milieu" << endl;

   std::srand( time(NULL) );

}


Milieu::~Milieu( void )
{

   cout << "dest Milieu" << endl;

}


void Milieu::step( void )
{
   list<double> orientations;
   cimg_forXY( *this, x, y ) fillC( x, y, 0, white[0], white[1], white[2] );

   

for ( std::vector<Bestiole>::iterator b1 = listeBestioles.begin() ; b1 != listeBestioles.end() ; ++b1 )
   {
      for (std::vector<Bestiole>::iterator b2 = listeBestioles.begin(); b2 < listeBestioles.end(); ++b2) 
      {
         if(it->jeTeVois(*b2))
         {
            orientations.push_back(b2->myOrientation());
         }
      }

      it->action( *this );
      it->draw( *this );
      
   }

   for ( std::vector<Bestiole>::iterator it = listeBestioles.begin() ; it != listeBestioles.end() ; ++it )
   {
   it->go(orientations);
   }

}



int Milieu::nbVoisins( const Bestiole & b )
{

   int         nb = 0;


   for ( std::vector<Bestiole>::iterator it = listeBestioles.begin() ; it != listeBestioles.end() ; ++it )
      if ( !(b == *it) && b.jeTeVois(*it) )
         ++nb;

   return nb;

}
