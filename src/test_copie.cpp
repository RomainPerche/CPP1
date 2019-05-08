#include "Dvector.h"
#include "main.h"

int test_copie(){
    Dvector a = Dvector(3, 4);
    Dvector b = Dvector(a);
    assert(b.size() == 3);
    std::stringstream str;
    b.display(str);
    assert(str.str() == "4\n4\n4\n");
    std::cout << "Constructeur par copie OK !\n";
    return 0;
}
