#ifndef DEMO_DISTRIBUTION_H
#define DEMO_DISTRIBUTION_H

#include <cmath>
#include <vector>

class Distribution {
 public:
   Distribution();
   virtual &operator= (const Distribution &distrib);
   virtual Distribution(const Distribution &distrib);
   virtual ~Distribution();

   virtual double pdf(const double& x) const = 0;
   virtual double cdf(const double& x) const = 0;

   virtual double inv_cdf(const double& quantile) const = 0;

   virtual double mean() const = 0;
   virtual double var() const = 0;
   virtual double stdev() const = 0;

   // Obtain a sequence of random draws from this distribution
   virtual void random_draws(const std::vector<double>& uniform_draws,
                            std::vector<double>& dist_draws) = 0;
};

#endif
