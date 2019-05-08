#include "Dvector.h"
#include "main.h"

int test_size(){
    Dvector d = Dvector(3, 4);
    assert(d.size() == 3);
    Dvector e = Dvector(0, 4);
    assert(e.size() == 0);
    std::cout << "Méthode size() OK !\n";
    return 0;
}
