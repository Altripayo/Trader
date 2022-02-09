#include "../neuralnetwork.h"
#include <vector>
#include <iostream>

bool NeuralNetwork::setInput(std::vector<double> input)
{
    if (this->input.size() != input.size())
    {
        std::cout << "NeuralNetwork::setInput; non-matching vector sizes" << std::endl;
        return false;
    }

    for (size_t i = 0; i < this->nInput; ++i)
    {
        this->input.at(i) = input.at(i);
    }

    return true;
}