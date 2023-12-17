#include<iostream>

namespace BestcomImpl{
    void simplefunc(void);
}

namespace ProgcomImpl{
    void simplefunc(void);
}

int main(void){
    BestcomImpl::simplefunc();
    ProgcomImpl::simplefunc();
    return 0;
}

void BestcomImpl::simplefunc(void){
    std::cout << "Bestcom이 정의한 함수" << std::endl;
}

void ProgcomImpl::simplefunc(void){
    std::cout << "Progcom이 정의한 함수" << std::endl;
}

// namespace BestcomImpl{