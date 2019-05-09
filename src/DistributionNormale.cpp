#include "DistributionNormale.h"
#include <cmath>


DistributionNormale::DistributionNormale() {}
DistributionNormale::~DistributionNormale() {}

double DistributionNormale::mean() {
    return 0.0;
}

double DistributionNormale::var() {
    return 1.0;
}

double DistributionNormale::stdev() {
    return 1.0;
}

double DistributionNormale::pdf() {
    return (1.0/sqrt(2.0 * M_PI)) * exp(-0.5*x*x);
}
