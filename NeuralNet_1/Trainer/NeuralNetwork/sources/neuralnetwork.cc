#include "../neuralnetwork.h"
#include <iostream>
#include <cstddef>

using namespace std;

NeuralNetwork::NeuralNetwork()
{
    size_t input;
    cout << "Number of input? ";
    cin >> input;
    nInput = input;

    this->input.clear();
    for (size_t i = 0; i < this->nInput; ++i)
    {
        this->input.push_back(0.0);
    }
    this->input.push_back(-1.0);

    cout << "Number of layers? ";
    cin >> input;
    nLayers = input;

    layers = new Layer[this->nLayers];

    for (size_t i = 0; i < this->nLayers; ++i)
    {
        //Create the necessary amount of nodes and weights
        cout << "Number of nodes for layer " << i << "? ";
        cin >> input;

        if (i == 0)
        {
            this->layers[i].setNodes(input, this->nInput);
            continue;
        }
        //else
        this->layers[i].setNodes(input, this->layers[i-1].d_nNodes());
    }
}

NeuralNetwork::NeuralNetwork(size_t nInput, size_t nLayers, size_t *nNodes)
{
    this->nInput = nInput;
    this->nLayers = nLayers;

    this->input.clear();
    for (size_t i = 0; i < this->nInput; ++i)
    {
        this->input.push_back(0.0);
    }
    this->input.push_back(-1.0);

    layers = new Layer[this->nLayers];

    for (size_t i = 0; i < this->nLayers; ++i)
    {
        if (i == 0)
        {
            this->layers[i].setNodes(nNodes[i], this->nInput);
            continue;
        }
        //else
        this->layers[i].setNodes(nNodes[i], this->layers[i-1].d_nNodes());
    }
}

NeuralNetwork::~NeuralNetwork()
{
    delete[] this->layers;
}