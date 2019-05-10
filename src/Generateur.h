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
    Generateur &operator= (const Generateur &generateur);    //operateur =
    Generateur(const Generateur &generateur);    //par recopie

    virtual void clone(Generateur &generateur) = 0;

    Generateur(int dimension);   //constructeur avec argument

    int getDimension() const;
    void setDimension(int dimension);

    virtual Dvector genererVecteur() = 0;

    virtual void set_seed(unsigned long long int seed) = 0;
    virtual unsigned long long int get_seed() = 0;
    virtual void reset_seed() = 0;
};

#endif
