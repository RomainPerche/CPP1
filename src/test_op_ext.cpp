#include "Dvector.h"
#include "main.h"
#include <assert.h>

int test_op_ext(){
    Dvector a = Dvector(3, 4);
    stringstream str;
    stringstream str2;
    str2 << "[1, 2, 3]";
    str2 >> a;
    a.display(str);
    assert(str.str() == "1\n2\n3\n");
    cout << "Opérateur d'extraction OK !";
    return 0;
}
