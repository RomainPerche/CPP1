#include "Dvector.h"
#include "main.h"
#include <assert.h>

int test_op_moins_egal(){
    Dvector a = Dvector(3, 4);
    Dvector b = Dvector(3, 4);
    stringstream str1;
    a-=b;
    a.display(str1);
    assert(str1.str() == "0\n0\n0\n");
    std::cout << "Opérateur -= avec un autre Dvector OK !\n";
    return 0;
}
