#ifndef DEMO_DISTRIBUTION_H
#define DEMO_DISTRIBUTION_H

#include <cmath>
#include <vector>
#include "Dvector.h"

class Distribution {
 public:
   Distribution();
   Distribution &operator= (const Distribution &distrib);
   Distribution(const Distribution &distrib);
   virtual ~Distribution();

   virtual double pdf(const double& x) const = 0;
   virtual double cdf(const double& x) const = 0;

   virtual double inv_cdf(double p) const = 0;

   virtual double mean() const = 0;
   virtual double var() const = 0;
   virtual double stdev() const = 0;

   virtual void random_draws(const Dvector& uniform_draws,
                            Dvector& dist_draws) = 0;
};

#endif
