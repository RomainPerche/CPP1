#include "Distribution.h"
#include "DistributionNormale.h"
#include "Dvector.h"
#include "main.h"
#include <assert.h>
#include <cmath>
/*
On teste CDF car l'implémentation choisie est une méthode d'approximation trouvée sur internet.
Ici, on compare les valeurs revoyées par notre implémentation avec des valeurs trouvées dans la table de la loi centrée réduite.
*/
int test_cdf() {
  DistributionNormale nDistrib;
  Dvector uniform_draws(10, 0.0);
  Dvector normal_draws(10, 0.0);
  for (int i=0; i<uniform_draws.size(); i++) {
      uniform_draws(i) = rand() / static_cast<double>(RAND_MAX);
  }
  nDistrib.random_draws(uniform_draws, normal_draws);
  double a = nDistrib.cdf(1.24);
  a = pow(10, -3)*(floor(a*pow(10, 3)));
  assert(a == 0.892);
  std::cout << "L'approximation de la cdf normale est bonne !\n";
  return 0;
}
