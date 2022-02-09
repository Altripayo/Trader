#include "../trainer.h"
#include <cstddef>
#include <iostream>

Trainer::Trainer()
{
    this->inputAmount = 0;
    this->outputAmount = 0;
    this->error = false;

    size_t nInput = 0;
    size_t nLayers = 0;
    size_t nNodes[nLayers];

    std::ifstream setup;
    setup.open("setup.txt");
    this->in.open("input.txt");
    this->out.open("output.txt");

    if (setup.is_open())
    {
        setup >> nInput;
        setup >> nLayers;
        for (size_t i = 0; i < nLayers; ++i)
        {
            setup >> nNodes[i];

            if(i == (nLayers-1))
                this->outputAmount = nNodes[i];
        }
    } else
    {
        std::cout << "Failed to open setup..." << std::endl;
        this->error = true;
    }

    if (!this->in.is_open())
    {
        std::cout << "Failed to open input..." << std::endl;
        this->error = true;
    }

    if (!this->out.is_open())
    {
        std::cout << "Failed to open output..." << std::endl;
        this->error = true;
    }

    checkError();

    this->in >> inputAmount;
    this->nn = new NeuralNetwork(nInput, nLayers, nNodes);
}

Trainer::~Trainer()
{
    this->in.close();
    this->out.close();
    delete this->nn;
}