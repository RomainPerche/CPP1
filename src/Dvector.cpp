#include "Dvector.h"
#include <fstream>
#include <string>
#include <assert.h>


using namespace std;


Dvector::Dvector() {
    cout << "Appel au constructeur par défaut." << "\n";
    dims = 0;
    coord = new double[0];
}


Dvector::Dvector(int size, double val) {
    cout << "Appel au constructeur avec arguments." << "\n";
    dims = size;
    coord = new double[size];
    for (int i=0; i<size; i++){
        coord[i]=val;
    }
}


Dvector::~Dvector() {
    cout << "Appel au destructeur." << "\n";
    delete [] coord;
}


void Dvector::display(std::ostream & str) {
    for (int i=0; i<dims; i++){
        str << coord[i] << "\n";
    }
}


int Dvector::size() {
    return dims;
}


void Dvector::fillRandomly() {
    for (int i=0; i<dims; i++){
        double value = (double) rand() / RAND_MAX;
        coord[i]=value;
    }
}


Dvector::Dvector(const Dvector & d) {
    cout << "Appel au constructeur par recopie." << "\n";
    dims = d.dims;
    if (dims == 0) return;
    coord = new double[dims];
    for (int i = 0; i < dims; i++) {
        coord[i] = d.coord[i];
    }
}


Dvector::Dvector(std::string file) {
    cout << "Appel au constructeur par lecture de fichier" << "\n";
    ifstream fichier(file.c_str(), ios::in);
    int size = 0;
    double entier_lu;

    if (fichier){
        while (fichier >> entier_lu) {
            size += 1;
        }
        dims = size;
        fichier.clear();
        fichier.seekg(0, ios::beg);
        coord = new double[dims];
        for (int i=0; i<dims; i++){
            fichier >> coord[i];
        }
        fichier.close();

    }
    else{
        cerr << "Impossible d'ouvrir le fichier !" << endl;
    }
}


double & Dvector::operator()(int i) {
    if (i < 0 || i > dims-1) {
        cerr << "Index out of range\n";
        exit(0);
    }
    return coord[i];
}


int main() {

    Dvector d = Dvector(3, 4);

    d(0) = 1;
    cout << d(0) << "\n";

    Dvector a;
    a = Dvector(3, 4);
    return 0;

}
