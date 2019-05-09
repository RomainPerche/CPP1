#include "Dvector.h"
#include "main.h"
#include <assert.h>

int test_op_moins_unaire(){
    Dvector a = Dvector(3, 4);
    stringstream str1;
    Dvector b = -a;
    b.display(str1);
    assert(str1.str() == "-4\n-4\n-4\n");
    std::cout << "Opérateur - unaire OK !\n";
    return 0;
}
