#include "Dvector.h"
#include "main.h"
#include <assert.h>

int test_op_egal_egal(){
    Dvector a = Dvector(3, 4);
    Dvector b = Dvector(3, 4);
    stringstream str1;
    bool c = (a == b);
    assert(c == true);
    std::cout << "Opérateur == OK !\n";
    return 0;
}
