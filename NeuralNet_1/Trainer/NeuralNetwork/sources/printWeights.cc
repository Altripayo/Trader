#include "../neuralnetwork.h"
#include <iostream>

void NeuralNetwork::printWeights()
{
    for (size_t i = 0; i < this->nLayers; ++i)
    {
        std::cout << std::endl << "Layer " << i << ":" << std::endl;
        this->layers[i].printWeights();
    }
}