#ifndef _COMPORTEMENT_H_
#define _COMPORTEMENT_H_

#include <iostream>
#include <vector>

using namespace std;

class Bestiole;

class Comportement {
public:
    virtual void agir(Bestiole *b);
    // virtual ~Comportement();
};


#endif