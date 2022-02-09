#ifndef TRAINER_INCLUDE_H
#define TRAINER_INCLUDE_H

#include "NeuralNetwork/neuralnetwork.h"
#include <fstream>
#include <cstddef>

class Trainer
{
    public:
        Trainer();
        ~Trainer();
        void checkError();

        //Getters
        size_t d_inputAmount();
        size_t d_outputAmount();

        void runOnce();
    private:
        bool error;
        NeuralNetwork *nn;
        std::ifstream in;
        std::ofstream out;
        size_t inputAmount;
        size_t outputAmount;
};

inline size_t Trainer::d_inputAmount()
{
    return this->inputAmount;
}

inline size_t Trainer::d_outputAmount()
{
    return this->outputAmount;
}

#endif