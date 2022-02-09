#include "../auxiliary.h"
#include <cmath>

double sigmoidActivation(double in)
{
    return 1.0 / ( 1.0 + exp(-in) );
}