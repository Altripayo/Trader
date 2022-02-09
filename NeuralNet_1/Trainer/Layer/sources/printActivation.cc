#include "../layer.h"
#include <iostream>

void Layer::printActivation()
{
    std::cout << "Activation: \n";
    for (size_t i = 0; i < this->activation.size()-1; ++i)
    {
        std::cout << "--Node " << i << ": ";
        std::cout << this->activation[i] << std::endl;
    }
}