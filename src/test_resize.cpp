#include "Dvector.h"
#include "main.h"
#include <assert.h>

int test_resize(){
    Dvector a = Dvector(3, 4);
    Dvector b = a.resize(3, 5);
    Dvector c = a.resize(5,5);
    Dvector d = a.resize(2, 3);
    stringstream str1;
    stringstream str2;
    stringstream str3;
    b.display(str1);
    c.display(str2);
    d.display(str3);
    assert(str1.str() == "4\n4\n4\n");
    assert(str2.str() == "4\n4\n4\n5\n5\n");
    assert(str3.str() == "4\n4\n");
    std::cout << "Méthode resize OK !\n";
    return 0;
}
