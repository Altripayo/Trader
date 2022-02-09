#include "../layer.h"

Layer::Layer()
{
    d_nNodes(0);
    d_nodes(d_nNodes());
}

Layer::Layer(size_t inputnNodes)
{
    d_nNodes(inputnNodes);
    d_nodes(d_nNodes());
}

Layer::~Layer()
{
    delete[] this->nodes;
}