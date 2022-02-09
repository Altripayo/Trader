#include "../auxiliary.h"
#include <random>
#include <iostream>

double randomValue()
{
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_real_distribution<> dis(-1.0, 1.0);
    return dis(gen);
}