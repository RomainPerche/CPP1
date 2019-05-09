#ifndef DEMO_GENERATEURPARKMILLER_H
#define DEMO_GENERATEURPARKMILLER_H

#include "Dvector.h"
#include "ParkMiller.h"
#include "Generateur.h"

using namespace std;


class GenerateurParkMiller : public Generateur
{
private:
    long seed;
    ParkMiller* parkMiller;

public:
    GenerateurParkMiller(int dimension);
    GenerateurParkMiller();

    long get_seed();
    void set_seed(long seed);
    void reset_seed();

    Dvector genererVecteur();
};

#endif
