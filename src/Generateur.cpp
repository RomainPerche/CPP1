#include <fstream>
#include <string>
#include <assert.h>
#include <string.h>
#include "Generateur.h"


using namespace std;


Generateur::Generateur() {
    dimension = 0;
}

Generateur::Generateur(int dim) {
    dimension = dim;
}

int Generateur::getDimension() {
    return dimension;
}
