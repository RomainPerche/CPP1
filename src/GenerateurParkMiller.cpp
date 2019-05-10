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

ParkMiller* GenerateurParkMiller::getParkMiller() const {
    return this->parkMiller;
}

void GenerateurParkMiller::setParkMiller(ParkMiller &pm) {
    this->parkMiller = &pm;
}

GenerateurParkMiller &GenerateurParkMiller::operator=(GenerateurParkMiller &generateur) {
    try{
        GenerateurParkMiller& gen = dynamic_cast<GenerateurParkMiller&>(generateur);
        this->setDimension(gen.getDimension());
        this->parkMiller->set_seed(gen.getParkMiller()->get_seed());
    }catch(bad_cast& e){
        cerr << "Conversion du générateur en ParkMiller impossible.";
    }
}

void GenerateurParkMiller::clone(Generateur &generateur) {
    try{
        GenerateurParkMiller& gen = dynamic_cast<GenerateurParkMiller&>(generateur);
        this->setDimension(gen.getDimension());
        this->parkMiller = gen.getParkMiller();
    }catch(bad_cast& e){
        cerr << "Conversion du générateur en ParkMiller impossible.";
    }
}

GenerateurParkMiller::GenerateurParkMiller(const GenerateurParkMiller &generateur) {
    this->setDimension(generateur.getDimension());
    this->parkMiller = generateur.getParkMiller();
}

unsigned long long int GenerateurParkMiller::get_seed() {
    return parkMiller->get_seed();
}

void GenerateurParkMiller::set_seed(unsigned long long int seed) {
    parkMiller->set_seed(seed);
}

void GenerateurParkMiller::reset_seed() {
    parkMiller->reset_seed();
}

Dvector GenerateurParkMiller::genererVecteur() {
    Dvector vect = Dvector((*this).getDimension(), 0);
    for (int i=0; i < (*this).getDimension(); i++) {
        vect(i) = (*parkMiller).genererProchain();
        this->parkMiller->set_seed(vect(i));
    }
    return vect;
}

/*
int main() {
    GenerateurParkMiller gpm1 = GenerateurParkMiller(4);
    GenerateurParkMiller gpm2 = GenerateurParkMiller(6);
    gpm1.set_seed(12345678);
    cout << gpm1.genererVecteur();
    //Dvector vect = gpm1.genererVecteur();
    //vect.display(cout);
    //vect = gpm2.genererVecteur();
    //vect.display(cout);
    return 0;
}
*/
