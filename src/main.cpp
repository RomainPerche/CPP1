#include "Dvector.h"
#include "main.h"

int main(){
    // test_param();
    // test_size();
    // test_copie();
    // test_fichier();

    Dvector a = Dvector(3,4);
    Dvector b = Dvector(3,4);
    Dvector c = -b;
    c.display(std::cout);
    return 0;
}
