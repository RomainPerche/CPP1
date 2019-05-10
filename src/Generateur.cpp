#include <fstream>
#include <string>
#include <assert.h>
#include <string.h>
#include "Generateur.h"


using namespace std;


Generateur::Generateur() {
    dimension = 0;
}

Generateur::Generateur(const Generateur &generateur) {
    this->dimension = generateur.getDimension();
}

Generateur& Generateur::operator= (const Generateur &generateur) {
    this->dimension = generateur.getDimension();
    return *this;
}

Generateur::Generateur(int dim) {
    dimension = dim;
}

int Generateur::getDimension() const {
    return dimension;
}

void Generateur::setDimension(int dimension) {
    this->dimension = dimension;
}
