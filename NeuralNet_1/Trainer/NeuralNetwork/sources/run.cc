#include "../neuralnetwork.h"
#include <cstddef>
#include <iostream>

void NeuralNetwork::run()
{
    // Loop over each layer (including output) and calculate the activation
    for (size_t i = 0; i < this->nLayers; ++i)
    {
        // First layer uses input vector rather than previous layer
        if (i == 0)
        {
            this->layers[i].run(this->input);
            continue;
        }

        // Latter layers use previous layer activation as input vector
        this->layers[i].run(this->layers[i-1].d_activation());
    }

    this->layers[this->nLayers - 1].printActivation();
}