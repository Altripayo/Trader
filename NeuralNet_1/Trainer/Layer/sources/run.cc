#include "../layer.h"
#include <vector>
#include "../../Auxiliary/auxiliary.h"

void Layer::run(std::vector<double> act)
{
    for (size_t i = 0; i < d_nNodes(); ++i)
    {
        this->activation.at(i) = sigmoidActivation( vectorMultiply(act, this->nodes[i].d_weights()) );
    }
}
