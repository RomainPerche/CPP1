#include "Dvector.h"
#include "main.h"
#include <assert.h>

int test_op_plus_scal(){
    Dvector a = Dvector(3, 4);
    double d = 2;
    stringstream str1;
    Dvector b = a+d;
    b.display(str1);
    assert(str1.str() == "6\n6\n6\n");
    std::cout << "Opérateur + avec un scalaire OK !\n";
    return 0;
}
