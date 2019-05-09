#include <fstream>
#include <string>
#include <assert.h>
#include <string.h>
#include "Dvector.h"
#include "GenerateurParkMiller.h"
#include "Generateur.h"
#include "ParkMiller.h"


GenerateurParkMiller::GenerateurParkMiller() : Generateur() {
    ParkMiller pm = ParkMiller();
    this->parkMiller = &pm;
}

GenerateurParkMiller::GenerateurParkMiller(int dimension) : Generateur(dimension) {
    ParkMiller pm = ParkMiller();
    this->parkMiller = &pm;
}

long GenerateurParkMiller::get_seed() {
    return (*this->parkMiller).get_seed();
}

void GenerateurParkMiller::set_seed(long seed) {
    (*this->parkMiller).set_seed(seed);
}

void GenerateurParkMiller::reset_seed() {
    (*this->parkMiller).reset_seed();
}

Dvector GenerateurParkMiller::genererVecteur() {
    Dvector vect = Dvector((*this).getDimension(), 0);
    for (int i=0; i < (*this).getDimension(); i++) {
        vect(i) = (*parkMiller).genererProchain();
        (*this).set_seed(vect(i));
    }
    return vect;
}

/*
int main() {
    GenerateurParkMiller gpm = GenerateurParkMiller(4);
    Dvector vect = gpm.genererVecteur();
    vect.display(cout);
    return 0;
}
*/
