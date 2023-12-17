#include<iostream>

namespace BestcomImpl{
    void simplefunc(void){
        std::cout << "Bestcom이 정의한 함수" << std::endl;
    }
}

namespace ProgcomImpl{
    void simplefunc(void){
        std::cout << "Progcom이 정의한 함수" << std::endl;
    }
}

int main(void){
    BestcomImpl::simplefunc();
    ProgcomImpl::simplefunc();
    return 0;
}