#ifndef NODE_INCLUDE_H
#define NODE_INCLUDE_H

#include <cstddef>
#include <vector>

class Node
{
    public:
        //Constructors
        Node();

        //Getters
        double d_th();
        std::vector<double> d_weights();

        //Setters
        void d_th(double th);
        void d_weights(std::vector<double> in);
        void d_weights(size_t numInput, double *in);
        void d_weights(size_t numInput);

        //Functions
        void printWeights();

    private:
        //Vector containing weights and the threshold (th as last element)
        std::vector<double> weights;
};

#endif