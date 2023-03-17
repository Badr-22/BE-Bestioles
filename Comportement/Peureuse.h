#ifndef _PEUREUSE_H_
#define _PEUREUSE_H_

#include "../Comportement.h"
#include "../Bestiole.h"

using namespace std;

class Peureuse : public Comportement {
public:
    void agir(Bestiole *b) override;
};

#endif // COMPORTEMENT_PEUREUSE_H_