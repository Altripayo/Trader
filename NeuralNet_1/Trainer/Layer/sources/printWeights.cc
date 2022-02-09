#include "../layer.h"
#include "../../Node/node.h"
#include <iostream>

void Layer::printWeights()
{
    for (size_t i = 0; i < d_nNodes(); ++i)
    {
        std::cout << "--Node " << i << ":" << std::endl;
        this->nodes[i].printWeights();
    }
}