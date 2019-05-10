#ifndef DEMO_DISTRIBUTIONNORMALE_H
#define DEMO_DISTRIBUTIONNORMALE_H
#include "Distribution.h"


class DistributionNormale : public Distribution {
 public:
   DistributionNormale();
   virtual ~DistributionNormale();
   DistributionNormale(const DistributionNormale & nDistrib);
   DistributionNormale &operator=(DistributionNormale & nDistrib);

  // Fonctions de distributions
  double pdf(const double& x) const;
  double cdf(const double& x) const;

  // Fonction inverse de la cdf
  double RationalApproximation(double t) const;
  double inv_cdf(double p) const;

  double mean() const;
  double var() const;
  double stdev() const;

  // Méthode de transformation d’une distribution uniforme en une autre distribution
  virtual void random_draws(const Dvector& uniform_draws,
                            Dvector& dist_draws);
};
#endif
