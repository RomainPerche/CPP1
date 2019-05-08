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

    void operator+= (const Dvector &vector);
    void operator+= (double scalaire);

    void operator-= (const Dvector &vector);
    void operator-= (double scalaire);

    void operator*= (double scalaire);
    void operator/= (double scalaire);

    bool operator== (const Dvector & vector) const;

    void resize(int newDim, )

};


#endif //DEMO_DVECTOR_H
