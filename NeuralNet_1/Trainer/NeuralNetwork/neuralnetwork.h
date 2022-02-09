#ifndef NEURALNETWORK_INCLUDE_H
#define NEURALNETWORK_INCLUDE_H

#include "../Node/node.h"
#include "../Layer/layer.h"
#include <vector>
#include <cstddef>

class NeuralNetwork
{
    public:
        //Constructors
        NeuralNetwork();
        NeuralNetwork(size_t nInput, size_t nLayers, size_t *nNodes);
        ~NeuralNetwork();

        //Getters
        size_t d_nInput();

        //Functions
        bool setInput(std::vector<double> input);
        void printWeights();
        void run();
    private:
        size_t nInput;
        std::vector<double> input;
        size_t nLayers;
        Layer *layers;
};

inline size_t NeuralNetwork::d_nInput()
{
    return this->nInput;
}

#endif