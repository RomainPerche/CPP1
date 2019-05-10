#include "DistributionNormale.h"
#include <cmath>


DistributionNormale::DistributionNormale() {}
DistributionNormale::~DistributionNormale() {}

double DistributionNormale::mean() const {
    return 0.0;
}

double DistributionNormale::var() const {
    return 1.0;
}

double DistributionNormale::stdev() const {
    return 1.0;
}

double DistributionNormale::pdf(const double& x) const {
    return (1.0/sqrt(2.0 * M_PI)) * exp(-0.5*x*x);
}

//Formule trouvée dans : "A Simple Approximation to the Area Under Standard Normal Curve" de Amit Choudhury.
double DistributionNormale::cdf(const double& x) const {
    if (x > 0) {
        return (1.0 - 1.0/sqrt(2.0 * M_PI) * exp(-0.5*x*x) / (0.226 + 0.64*x + 0.33*sqrt(x*x+3)));
    }
    if (x == 0) {
        return 0.5;
    }
    else {
        return (1.0 - cdf(-x));
    }

}

//Méthode trouvé dans : "A literate program to compute the inverse of the normal CDF" de John D. Cook.
double DistributionNormale::RationalApproximation(double t) const
{
    // Abramowitz and Stegun formula 26.2.23.
    double c[] = {2.515517, 0.802853, 0.010328};
    double d[] = {1.432788, 0.189269, 0.001308};
    return t - ((c[2]*t + c[1])*t + c[0]) /
        (((d[2]*t + d[1])*t + d[0])*t + 1.0);
}

double DistributionNormale::inv_cdf(double p) const
{
    if (p <= 0.0 || p >= 1.0)
    {
        std::stringstream os;
        os << "Argument invalide (" << p
           << "); doit être compris entre 0 et 1.";
        throw std::invalid_argument( os.str() );
    }
    if (p < 0.5)
    {
        return -RationalApproximation( sqrt(-2.0*log(p)) );
    }
    else
    {
        return RationalApproximation( sqrt(-2.0*log(1-p)) );
    }
}


void DistributionNormale::random_draws(const Dvector& uniform_draws, Dvector& dist_draws) {
    try
    {
    if (uniform_draws.size() != dist_draws.size()) {
        throw string("Les Dvectors sont de tailles différentes dans la distribution normale.");
        return;
    }
    if (uniform_draws.size() % 2 != 0) {
        throw string("Le Dvector uniforme n'est pas de taille pair.");
        return;
    }
    for (int i=0; i<uniform_draws.size() / 2; i++) {
        dist_draws(2*i) = sqrt(-2.0*log(uniform_draws(2*i))) * sin(2*M_PI*uniform_draws(2*i+1));
        dist_draws(2*i+1) = sqrt(-2.0*log(uniform_draws(2*i))) * cos(2*M_PI*uniform_draws(2*i+1));
    }
    return;
    }
    catch (string const& chaine)
    {
        cerr << chaine << endl;
    }

}
