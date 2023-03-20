# include "Gregaire.h"

void Gregaire::agir(Bestiole *b, list<double> orientations) {
    // Implémentation du comportement Gregaire
    // Suivre les groupes de Bestioles et les heurter
    // avec une certaine probabilité
    cout << "Gregaire chimba !" << endl;

    b->couleur[ 0 ] = 255;
    b->couleur[ 1 ] = 223;
    b->couleur[ 2 ] = 66;

    if (orientations.size()==0){
        return;
    }
    double x = 0;
    for(auto i = orientations.begin(); i != orientations.end(); i++){
        x += *i;
    }
    b->startNewOrientation(x/ orientations.size());
    //b->newOrientation = 1;
    //b->orientation = 1;
}

