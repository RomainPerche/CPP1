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

    Dvector operator+ (double scalaire) const;
    Dvector operator- (double scalaire) const;
    Dvector operator/ (double scalaire) const;
    Dvector operator* (double scalaire) const;

    Dvector &operator= (const Dvector &vector);
    Dvector &operator=(Dvector & other);

    void operator+= (const Dvector &vector);
    void operator+= (double scalaire);

    void operator-= (const Dvector &vector);
    void operator-= (double scalaire);

    void operator*= (double scalaire);
    void operator/= (double scalaire);

    bool operator== (const Dvector & vector) const;

    Dvector resize(int size, double val) const;
    friend ostream& operator<<(ostream&, const Dvector);
    friend istream& operator>>(istream&, Dvector&);
};


#endif //DEMO_DVECTOR_H
