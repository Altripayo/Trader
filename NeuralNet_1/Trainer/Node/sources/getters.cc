#include "../node.h"
#include <vector>

double Node::d_th()
{
    return this->weights.back();
}

std::vector<double> Node::d_weights()
{
    return this->weights;
}