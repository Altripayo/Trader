#include "../trainer.h"
#include <vector>

void Trainer::runOnce()
{
    std::vector<double> input;
    
    for (size_t i = 0; i < this->nn->d_nInput(); ++i)
    {
        double num;
        this->in >> num;
        input.push_back(num);
    }

    this->error = !(this->nn->setInput(input));
    checkError();
    this->nn->run();
}