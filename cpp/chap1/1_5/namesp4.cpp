#include<iostream>

namespace parent
{
    int num = 2;
    namespace sub1
    {
        int num = 3;
    }
    namespace sub2
    {
        int num = 4;
    }
}

int main(void)
{
    std::cout << parent::num << std::endl; // 2
    std::cout << parent::sub1::num << std::endl; // 3
    std::cout << parent::sub2::num << std::endl; // 4
    return 0;
}