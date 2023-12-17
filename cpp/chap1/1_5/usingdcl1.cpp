#include<iostream>

namespace hybrid
{
    void hbybfunc(void)
    {
        std::cout << "so simple function!" << std::endl;
        std::cout << "in namespace hybrid!" << std::endl;
    }
}

int main(void)
{
    using hybrid::hbybfunc;
    hbybfunc();
    return 0;
}