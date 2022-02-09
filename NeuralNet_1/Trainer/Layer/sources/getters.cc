#include "../layer.h"
#include <vector>

size_t Layer::d_nNodes()
{
    return this->nNodes;
}

std::vector<double> Layer::d_activation()
{
    return this->activation;
}