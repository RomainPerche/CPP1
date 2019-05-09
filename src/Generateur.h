#ifndef DEMO_GENERATEUR_H
#define DEMO_GENERATEUR_H


#include "Dvector.h"


using namespace std;


class Generateur
{
private:
    int dimension;

public:
    //4 methodes de base de la classe:
    Generateur();    //par défaut
    operator= (const Generateur &generateur);    //operateur =
    Generateur(const Generateur &generateur);    //par recopie

    Generateur(int dimension);   //constructeur avec argument

    int getDimension();

    virtual Dvector genererVecteur() = 0;

    virtual void set_seed(long seed) = 0;
    virtual long get_seed() = 0;
    virtual void reset_seed() = 0;
};

#endif
