#include "Dvector.h"
#include "main.h"
#include "DistributionNormale.h"
#include "Distribution.h"


using namespace std;
int main(){
    // test_param();
    // test_size();
    // test_copie();
    // test_fichier();
    // test_op_plus();
    // test_op_moins();
    // test_op_moins_unaire();
    // test_op_access();
    // test_op_egal();
    // test_op_plus_scal();
    // test_op_moins_scal();
    // test_op_mult_scal();
    // test_op_div_scal();
    // test_op_plus_egal_scal();
    // test_op_moins_egal_scal();
    // test_op_mult_egal_scal();
    // test_op_div_egal_scal();
    // test_op_plus_egal();
    // test_op_moins_egal();
    // test_op_egal_egal();
    // test_resize();
    // test_op_ext();
    // test_op_inj();
    // test_cdf();


    // // Create the Standard Normal Distribution and random draw vectors
    // DistributionNormale nDistrib;
    // Dvector uniform_draws(1000, 0.0);
    // Dvector normal_draws(1000, 0.0);
    //
    // // Simple random number generation method based on RAND
    // for (int i=0; i<uniform_draws.size(); i++) {
    //     uniform_draws(i) = rand() / static_cast<double>(RAND_MAX);
    // }
    //
    // // Create standard normal random draws
    // // Notice that the uniform draws are unaffected. We have separated
    // // out the uniform creation from the normal draw creation, which
    // // will allow us to create sophisticated random number generators
    // // without interfering with the statistical classes
    // nDistrib.random_draws(uniform_draws, normal_draws);
    //
    // // Output the values of the standard normal random draws
    // // for (int i=0; i<normal_draws.size(); i++) {
    // //     cout << normal_draws(i) << ",";
    // // }
    //
    // cout << nDistrib.cdf(1.24);

    return 0;
}
