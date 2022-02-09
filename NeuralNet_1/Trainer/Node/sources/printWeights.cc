#include "../node.h"
#include <iostream>

void Node::printWeights()
{
    std::cout << "Weights[" << this->weights.size() - 1 << "]: [";
    for (size_t i = 0; i < this->weights.size()-1; ++i)
    {
        std::cout << " " << this->weights.at(i) << " ";
    }
    std::cout << "]" << std::endl;

    std::cout << "Threshold: " << this->weights.back() << std::endl;
}