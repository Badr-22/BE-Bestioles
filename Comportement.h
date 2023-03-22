#ifndef _COMPORTEMENT_H_
#define _COMPORTEMENT_H_

#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Bestiole;

class Comportement {
public:
    virtual void agir(Bestiole *b, list<double> orientations);
    
};


#endif