#ifndef DEMO_PARKMILLER_H
#define DEMO_PARKMILLER_H

#include "Dvector.h"
using namespace std;


class ParkMiller
{
private:
    long seed;
    static int A;
    static int M;
    static int Q;
    static int R;
public:
    ParkMiller();
    ParkMiller(long seed);
    ParkMiller(const ParkMiller & parkMiller);
    ParkMiller &operator= (const ParkMiller & parkMiller);

    long get_seed() const;
    void set_seed(long seed);
    void reset_seed();

    long genererProchain();
};

#endif
