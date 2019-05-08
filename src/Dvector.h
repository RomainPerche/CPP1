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

    void display(std::ostream & str);
    int size();
    void fillRandomly();

    double & operator() (int i);

};


#endif //DEMO_DVECTOR_H
