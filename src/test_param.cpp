#include "Dvector.h"

int test_param(){
    Dvector d = Dvector(3, 4);
    assert(d.size() == 3);
    stringstream str;
    d.display(str);
    assert(str.str() == "4\n4\n4\n");
    cout << "Constructeur avec paramètres OK !\n";
    return 0;
  }
