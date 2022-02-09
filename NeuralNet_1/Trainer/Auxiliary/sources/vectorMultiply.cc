#include "../auxiliary.h"
#include <vector>
#include <iostream>

double vectorMultiply(std::vector<double> in1, std::vector<double> in2)
{
    if (in1.size() != in2.size())
    {
        std::cout << "Incompatible vector sizes in vector multiply\n";
        return -100.0;
    }
    
    double sum = 0.0;
    for (size_t i = 0; i < in1.size(); ++i)
    {
        sum += in1.at(i) * in2.at(i);
    }

    return sum;
}