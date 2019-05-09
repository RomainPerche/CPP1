#include "Dvector.h"
#include <fstream>
#include <string>
#include <assert.h>
#include <string.h>


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


Dvector operator+(const Dvector &a, const Dvector &b){
    if (a.size() == b.size()){
        Dvector c = Dvector(a.size(), 0);
        for (int i=0; i<a.size(); i++){
            c(i) = a(i) + b(i);
        }
        return c;
    }
    else{
        cerr << "Impossible d'additionner deux vecteurs de tailles différentes.";
        exit(-1);
    }
}

Dvector operator-(const Dvector &a, const Dvector &b){
    if (a.size() == b.size()){
        Dvector c = Dvector(a.size(), 0);
        for (int i=0; i<a.size(); i++){
            c(i) = a(i) - b(i);
        }
        return c;
    }
    else{
        cerr << "Impossible de soustraire deux vecteurs de tailles différentes.";
        exit(-1);
    }
}

Dvector Dvector::operator-() const{
    if (dims == 0){
        return *this;
    }
    else{
        Dvector newDvector = Dvector(dims, 0);
        for (int i=0; i<dims; i++){
            newDvector(i) = -(*this)(i);
        }
        return newDvector;
    }
}

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

/*
Dvector &Dvector::operator=(Dvector &vector) {
    delete [] this->coord;
    this->dims = vector.size();
    this->coord = new double[dims];
    memcpy(coord, &vector(0), sizeof(vector(0))*dims);
    return *this;
}
*/

Dvector Dvector::operator+(double scalaire) const {
    Dvector vecteur(dims, 0);
    for (int i=0; i < dims; i++){
        vecteur(i) = coord[i] + scalaire;
    }
    return vecteur;
}


Dvector Dvector::operator-(double scalaire) const {
    Dvector vecteur(dims, 0);
    for (int i=0; i < dims; i++){
        vecteur(i) = coord[i] - scalaire;
    }
    return vecteur;
}


Dvector Dvector::operator*(double scalaire) const {
    Dvector vecteur(dims, 0);
    for (int i=0; i < dims; i++){
        vecteur(i) = coord[i]*scalaire;
    }
    return vecteur;
}


Dvector Dvector::operator/(double scalaire) const {
    Dvector vecteur(dims, 0);
    if (scalaire != 0){
        for (int i=0; i < dims; i++){
            vecteur(i) = coord[i]/scalaire;
        }
    }
    else{
        cerr << "Division by 0 error" << "\n";
        exit(-1);
    }
    return vecteur;
}


void Dvector::operator+=(double scalaire) {
    for (int i=0; i < dims; i++){
        (*this)(i) += scalaire;
    }
}


void Dvector::operator+=(const Dvector & vector) {
    if ( dims == vector.size() ){
        for (int i=0; i < dims; i++){
            (*this)(i) += vector(i);
        }
    }
    else{
        std::cerr << "Vectors must have same size" << '\n';
        exit(-1);
    }
}


void Dvector::operator-=(double scalaire) {
    for (int i=0; i < dims; i++){
        (*this)(i) -= scalaire;
    }
}


void Dvector::operator-=(const Dvector & vector) {
    if ( dims == vector.size() ){
        for (int i=0; i < dims; i++){
            (*this)(i) -= vector(i);
        }
    }
    else{
        std::cerr << "Vectors must have same size" << '\n';
        exit(-1);
    }
}


void Dvector::operator*=(double scalaire) {
    for (int i=0; i < dims; i++){
        (*this)(i) *= scalaire;
    }
}


void Dvector::operator/=(double scalaire) {
    if (scalaire != 0){
        for (int i=0; i < dims; i++){
            (*this)(i) /= scalaire;
        }
    }
    else{
        cerr << "Division by 0 error" << '\n';
        exit(-1);
    }
}


bool Dvector::operator== (const Dvector & vector) const {
    if ( vector.size() != dims ){
        return false;
    }
    else {
        for (int i=0; i < dims; i++){
            if ( vector(i) != (*this)(i) ){
                return false;
            }
        }
        return true;
    }
}

/*
int main() {
    Dvector d = Dvector(3, 4);
    Dvector e = Dvector(4, 4);
    bool egal = (d == e);
    cout << egal;
    d.display(cout);

    Dvector a;
    a = Dvector(3, 4);
    return 0;
}
*/
