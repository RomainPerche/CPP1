#include "Dvector.h"
#include "main.h"

int test_defaut(){
    Dvector a;
    std::stringstream str;
    assert(str.str() == "Appel au constructeur par défaut.\n");
    std::cout << "Constructeur par défaut OK !\n";
    return 0;
}
