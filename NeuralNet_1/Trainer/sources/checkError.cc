#include "../trainer.h"
#include <iostream>

void Trainer::checkError()
{
    if (this->error)
    {
        std::cout   << "Error occurred..." << std::endl
                    << "Terminating with error..." << std::endl;
        
        exit(1);
    }
}