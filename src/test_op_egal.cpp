#include "Dvector.h"
#include "main.h"
#include <assert.h>

int test_op_egal(){
    Dvector a = Dvector(3, 4);
    Dvector b = a;
    stringstream str1;
    b.display(str1);
    assert(str1.str() == "4\n4\n4\n");
    std::cout << "Opérateur = OK !\n";
    return 0;
}
