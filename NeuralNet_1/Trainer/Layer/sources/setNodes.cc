#include "../layer.h"
#include <cstddef>

void Layer::setNodes(size_t input, size_t numWeights)
{
    delete[] this->nodes;
    
    d_nNodes(input);
    d_nodes(input);

    this->activation.clear();
    for (size_t i = 0; i < d_nNodes(); ++i)
    {
        this->activation.push_back(0.0);
        this->nodes[i].d_weights(numWeights);
    }
    this->activation.push_back(-1.0);
}