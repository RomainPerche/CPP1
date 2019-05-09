#include <fstream>
#include <string>
#include <assert.h>
#include <string.h>
#include <cmath>
#include "ParkMiller.h"


using namespace std;


//Initialisation des variables statiques:
int ParkMiller::A=16807;
int ParkMiller::M=2147483647;
int ParkMiller::Q=127773;
int ParkMiller::R=2836;


ParkMiller::ParkMiller(const ParkMiller & parkMiller) {
    this->seed = parkMiller.get_seed();
}

ParkMiller &ParkMiller::operator=(const ParkMiller &parkMiller) {
    this->seed = parkMiller.get_seed();
    return *this;
}

ParkMiller::ParkMiller() {
    this->seed = 1;
}

ParkMiller::ParkMiller(long seed) {
    if (seed > 0) {
        this->seed = seed;
    }
    else {
        throw 'a';
    }
}

long ParkMiller::get_seed() const {
    return this->seed;
}

void ParkMiller::set_seed(long seed) {
    if (seed > 0) {
        this->seed = seed;
    }
    else {
        throw 'a';
    }
}

void ParkMiller::reset_seed() {
    this->seed = 1;
}

long ParkMiller::genererProchain() {
    long newNumber = A*( seed - floor(seed/Q)*Q ) - R*floor(seed/Q);
    return newNumber%M;
}

/*
int main() {
    ParkMiller pm2;
    ParkMiller pm = ParkMiller(10);
    pm2 = ParkMiller();
    cout << pm.genererProchain() << "\n";
    cout << pm2.genererProchain() << "\n";
    return 0;
}
*/
