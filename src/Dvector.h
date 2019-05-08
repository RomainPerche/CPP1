#ifndef DEMO_DVECTOR_H
#define DEMO_DVECTOR_H
#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;
class Dvector
{
private:
    int dims;
    double *coord;
public:
    Dvector(); //par défaut
    Dvector(int size, double val); //avec arguments
    ~Dvector(); //destructeur
    Dvector(const Dvector & d); //par recopie
    Dvector(std::string); //avec lecture d'un fichier

    friend Dvector operator+(const Dvector &a, const Dvector &b); //addition de 2 vecteurs
    friend Dvector operator-(const Dvector &a, const Dvector &b); //soustraction de 2 vecteurs
    Dvector operator-() const; //opérateur unaire -

    void display(std::ostream & str) const;
    int size() const;
    void fillRandomly();

    double &operator() (int i);
    double operator() (int i) const;
    Dvector operator+ (double scalaire);
    Dvector operator- (double scalaire);
    Dvector operator/ (double scalaire);
    Dvector operator* (double scalaire);

    Dvector &operator=(const Dvector &vector);


};




#endif //DEMO_DVECTOR_H
