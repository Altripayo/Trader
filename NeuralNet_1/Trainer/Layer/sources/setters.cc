#include "../layer.h"

void Layer::d_nNodes(size_t input)
{
    this->nNodes = input;
}

void Layer::d_nodes(size_t input)
{
    this->nodes = new Node[input];
}