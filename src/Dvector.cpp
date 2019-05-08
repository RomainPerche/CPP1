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


void Dvector::display(std::ostream & str) const {
    for (int i=0; i<dims; i++){
        str << coord[i] << "\n";
    }
}

<<<<<<< HEAD
=======

>>>>>>> e64c157c5bd312b123a7f919251828f3db179019
int Dvector::size() const {
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

<<<<<<< HEAD
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
=======

double &Dvector::operator()(int i) {
    if (i < 0 || i > dims-1) {
        cerr << "Index out of range\n";
        exit(-1);
    }
    return coord[i];
}


double Dvector::operator()(int i) const {
    if (i < 0 || i > dims-1) {
        cerr << "Index out of range\n";
        exit(-1);
    }
    return coord[i];
}


Dvector &Dvector::operator=(const Dvector &vector) {
    delete [] this->coord;
    this->dims = vector.size();
    this->coord = new double[dims];
    for (int i=0; i < dims; i++){
        this->coord[i] = vector(i);
    }
    return *this;
}


Dvector Dvector::operator+(double scalaire) {
    Dvector vecteur(dims, 0);
    for (int i=0; i < dims; i++){
        vecteur(i) = coord[i] + scalaire;
    }
    return vecteur;
}


Dvector Dvector::operator-(double scalaire) {
    Dvector vecteur(dims, 0);
    for (int i=0; i < dims; i++){
        vecteur(i) = coord[i] - scalaire;
    }
    return vecteur;
}


Dvector Dvector::operator*(double scalaire) {
    Dvector vecteur(dims, 0);
    for (int i=0; i < dims; i++){
        vecteur(i) = coord[i]*scalaire;
    }
    return vecteur;
}


/*
Dvector Dvector::operator/(double scalaire) {
    Dvector vecteur(dims, 0);
    if (scalaire != 0){
        for (int i=0; i < dims; i++){
            vecteur(i) = coord[i]/scalaire;
        }
    }
    else{
        cerr << "Division by 0 error";
        exit(-1);
    }
}
*/


int main() {

    Dvector d = Dvector(3, 4);
    d = d/3;
    d.display(cout);

    Dvector a;
    a = Dvector(3, 4);
    return 0;

>>>>>>> e64c157c5bd312b123a7f919251828f3db179019
}
