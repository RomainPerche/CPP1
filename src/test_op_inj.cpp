#include "Dvector.h"
#include "main.h"
#include <assert.h>

int test_op_inj(){
    stringstream str;
    Dvector a = Dvector(3, 4);
    a.display(str);
    assert(str.str() == "4\n4\n4\n");
    cout << "Opérateur d'injection OK !" << endl;
    return 0;
}
