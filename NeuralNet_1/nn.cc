#include "nn.ih"

int main()
{
    Trainer test;
    size_t count = 0;
    while (count < test.d_inputAmount())
    {
        test.runOnce();
        ++count;
    }
}