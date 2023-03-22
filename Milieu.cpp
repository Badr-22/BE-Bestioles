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

/*
void Milieu::step( void )
{
   list<double> orientations;
   cimg_forXY( *this, x, y ) fillC( x, y, 0, white[0], white[1], white[2] );

   for ( std::vector<Bestiole>::iterator b1 = listeBestioles.begin() ; b1 != listeBestioles.end() ; ++b1 )
      {
         for (std::vector<Bestiole>::iterator b2 = listeBestioles.begin(); b2 < listeBestioles.end(); ++b2)
         { 
         
            if(b1->jeTeVois(*b2))
            {
               orientations.push_back(b2->myOrientation());
            }
         }
      }

   for ( std::vector<Bestiole>::iterator b = listeBestioles.begin() ; b != listeBestioles.end() ; ++b )
      {
         b->action( *this );
         b->draw( *this );
         b->go(orientations);
      }
      
}*/

void Milieu::step( void )
{
   
   cimg_forXY( *this, x, y ) fillC( x, y, 0, white[0], white[1], white[2] );


   
   for ( std::vector<Bestiole>::iterator b1 = listeBestioles.begin() ; b1 != listeBestioles.end() ; ++b1 )
      {
         list<double> orientations;
         for (std::vector<Bestiole>::iterator b2 = listeBestioles.begin(); b2 < listeBestioles.end(); ++b2) 
         {
            if(!(b1 == b2) && (b1->jeTeVois(*b2)) )
            {
               orientations.push_back(b2->myOrientation());
            }
         
         }
         b1->go(orientations);
         b1->action( *this );
         b1->draw( *this );
         
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
