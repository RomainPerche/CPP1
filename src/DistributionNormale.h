#ifndef DEMO_DISTRIBUTIONNORMALE_H
#define DEMO_DISTRIBUTIONNORMALE_H


class NormalDistribution : public Distribution {
 public:
  NormalDistribution();
  ~NormalDistribution();

  // Distribution functions
  double pdf(const double& x) const;
  double cdf(const double& x) const;

  // Inverse cumulative distribution function (aka the probit function)
  double inv_cdf(const double& quantile) const;

  // Descriptive stats
  double mean() const;   // equal to 0
  double var() const;    // equal to 1
  double stdev() const;  // equal to 1

  // Obtain a sequence of random draws from the standard normal distribution
  void random_draws(const std::vector<double>& uniform_draws,
                            std::vector<double>& dist_draws);
};
#endif
