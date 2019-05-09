#include "Dvector.h"
#include "main.h"
#include <assert.h>

int test_op_moins(){
    Dvector a = Dvector(3, 4);
    Dvector b = Dvector(3, 3);
    Dvector c = Dvector(4, 4);
    stringstream str1;
    stringstream str2;
    Dvector d = a-b;
    d.display(str1);
    assert(str1.str() == "1\n1\n1\n");
    //Dvector e = a-c;
    //Ne fonctionne pas ! Doit afficher : "Impossible de soustraire deux vecteurs de tailles différentes."
    //Et sort du programme.
    std::cout << "Opérateur - entre Dvectors OK !\n";
    return 0;
}
