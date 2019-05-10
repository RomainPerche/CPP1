#ifndef DEMO_GENERATEURPARKMILLER_H
#define DEMO_GENERATEURPARKMILLER_H

#include "Dvector.h"
#include "ParkMiller.h"
#include "Generateur.h"

using namespace std;


class GenerateurParkMiller : public Generateur
{
private:
    ParkMiller* parkMiller;

public:
    GenerateurParkMiller(int dimension);
    GenerateurParkMiller();

    GenerateurParkMiller(const GenerateurParkMiller &generateur);

    GenerateurParkMiller &operator=(GenerateurParkMiller &generateur);

    void clone(Generateur &generateur) override;

    void setParkMiller(ParkMiller &pm);
    ParkMiller *getParkMiller() const;

    unsigned long long int get_seed();
    void set_seed(unsigned long long int seed);
    void reset_seed();

    Dvector genererVecteur();
};

#endif
