#include "Dvector.h"
#include "main.h"
#include <assert.h>

int test_op_moins_egal_scal(){
    Dvector a = Dvector(3, 4);
    double d = 2;
    stringstream str1;
    a-=d;
    a.display(str1);
    assert(str1.str() == "2\n2\n2\n");
    std::cout << "Opérateur -= avec un scalaire OK !\n";
    return 0;
}
