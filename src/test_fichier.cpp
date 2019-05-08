#include "Dvector.h"
#include "main.h"

int test_fichier(){
    Dvector d = Dvector(3, 4);
    ofstream fichier_test("test.txt", ios::out | ios::trunc);
    if (fichier_test){
        d.display(fichier_test);
        fichier_test.close();
    }
    else{
        cout << "Le fichier ne s'est pas créé.\n";
    }
    Dvector f = Dvector("test.txt");
    assert(f.size() == 3);
    stringstream str;
    f.display(str);
    assert(str.str() == "4\n4\n4\n");
    std::cout << "Constructeur avec lecture de fichier OK !\n";
    return 0;
}
