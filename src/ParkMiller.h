#ifndef DEMO_PARKMILLER_H
#define DEMO_PARKMILLER_H

#include "Dvector.h"
using namespace std;


class ParkMiller
{
private:
    unsigned long long int seed;
    static int A;
    static int M;
    static int Q;
    static int R;
public:
    ParkMiller();
    ParkMiller(unsigned long long int seed);
    ParkMiller(const ParkMiller & parkMiller);
    ParkMiller &operator= (const ParkMiller & parkMiller);

    unsigned long long int get_seed() const;
    void set_seed(unsigned long long int seed);
    void reset_seed();

    unsigned long long int genererProchain();
};

#endif
