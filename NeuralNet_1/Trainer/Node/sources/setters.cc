#include "../node.h"
#include "../../Auxiliary/auxiliary.h"
#include <cstddef>
#include <vector>

void Node::d_th(double th)
{
    this->weights.back() = th;
}

    // Input must have threshold as last element included
void Node::d_weights(std::vector<double> in)
{
    this->weights.clear();

    for (double i : in)
    {
        this->weights.push_back(i);
    }
}

    // Input must have threshold as last element included
void Node::d_weights(size_t numInput, double *in)
{
    this->weights.clear();

    for (size_t i = 0; i < numInput; ++i)
    {
        this->weights.push_back(in[i]);
    }
}

void Node::d_weights(size_t numInput)
{
    this->weights.clear();

    for (size_t i = 0; i < numInput; ++i)
    {
        this->weights.push_back(randomValue());
    }

    this->weights.push_back(1.0);
}