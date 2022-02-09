#ifndef LAYER_INCLUDE_H
#define LAYER_INCLUDE_H

#include "../Node/node.h"
#include <cstddef>
#include <vector>

class Layer
{
    public:
        //Constructors
        Layer();
        Layer(size_t inputnNodes);
        ~Layer();      

        //Getters
        size_t d_nNodes();
        std::vector<double> d_activation();

        //Functions
        void run(std::vector<double> act);
        
        void setNodes(size_t input, size_t numWeights);

        void printActivation();
        void printWeights();
    private:
        std::vector<double> activation;
        size_t nNodes;
        Node *nodes;

        //Setters
        void d_nNodes(size_t input);
        void d_nodes(size_t input); 
};

#endif