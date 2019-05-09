#include "Dvector.h"
#include "main.h"
#include <assert.h>

int test_op_access(){
    Dvector a = Dvector(3, 4);
    double i;
    a(0) = 0;
    i = a(0);
    stringstream str1;
    a.display(str1);
    assert(str1.str() == "0\n4\n4\n");
    std::cout << "Opérateur () OK !\n";
    return 0;
}
