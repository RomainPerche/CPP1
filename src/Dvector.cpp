#include "Dvector.h"
#include <fstream>
#include <string>
#include <assert.h>

using namespace std;

Dvector::Dvector() {
    cout << "Appel au constructeur par défaut." << "\n";
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

int Dvector::size(){
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

int main(){

    Dvector d = Dvector(3, 4);
    assert(d.size() == 3);
    stringstream str;
    d.display(str);
    assert(str.str() == "4\n4\n4\n");
    cout << "OK !\n";

    Dvector a;
    a = Dvector(3, 4);
    assert(a.size() == 3);
    stringstream str1;
    a.display(str1);
    a.display(cout);
    assert(str1.str() == "4\n4\n4\n");
    cout << "OK !\n";
    /*
    d.display(std::cout);
    Dvector r = Dvector(8, 0);
    r.display(std::cout);
    r.fillRandomly();
    r.display(std::cout);
    Dvector c = Dvector(r);
    c.display(std::cout);


    ofstream fichier_test("test.txt", ios::out | ios::trunc);
    if (fichier_test){
        r.display(fichier_test);
        fichier_test.close();
    }
    else{
        cout << "erreur de merde";
    }
    Dvector f = Dvector("test.txt");
    f.display(std::cout);

*/
    return 0;

}
