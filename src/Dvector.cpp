#include "Dvector.h"
#include <fstream>
#include <string>
#include <assert.h>

using namespace std;

Dvector::Dvector() {
    cout << "Appel au constructeur par défaut.\n";
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

void Dvector::display(std::ostream & str){
    for (int i=0; i<dims; i++){
        str << coord[i] << "\n";
    }
}

int Dvector::size() const {
    return dims;
}

void Dvector::fillRandomly(){
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

Dvector::Dvector(std::string file){
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

friend Dvector Dvector::operator+(const Dvector &a, const Dvector &b){
    if (a.size() == b.size()){
        Dvector c = Dvector(a.size(), 0);
        for (int i=0; i<a.size(); i++){
            c(i) = a(i) + b(i);
        }
    }
    else{
        cout << "Impossible d'additionner deux vecteurs de tailles différentes.";
    }
    return c;
}

friend Dvector Dvector::operator-(const Dvector &a, const Dvector &b){
    if (a.size() == b.size()){
        Dvector c = Dvector(a.size(), 0);
        for (int i=0; i<a.size(); i++){
            c(i) = a(i) - b(i);
        }
    }
    else{
        cout << "Impossible de soustraire deux vecteurs de tailles différentes.";
    }
    return c;
}

Dvector Dvector::operator-(const Dvector &a){
    if (a.size() == 0){
        return a;
    }
    else{
        Dvector newDvector = Dvector(a.size(), 0);
        for (int i=0; i<a.size(); i++){
            newDvector(i) = -a(i);
        }
        return newDvector;
    }
}
