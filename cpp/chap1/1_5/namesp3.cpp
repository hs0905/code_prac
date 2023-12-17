#include<iostream>

namespace BestcomImpl{
    void simplefunc(void); 
}

namespace BestcomImpl{
    void prettyfunc(void);
}

namespace ProgcomImpl{
    void simplefunc(void);
}

int main(void){
    BestcomImpl::simplefunc();
    return 0;
}

void BestcomImpl::simplefunc(void){
    std::cout << "Bestcom이 정의한 함수" << std::endl;
    prettyfunc(); // 동일 namespace 내의 함수 호출
    ProgcomImpl::simplefunc(); // 다른 namespace 내의 함수 호출
}

void BestcomImpl::prettyfunc(void){
    std::cout << "So Pretty!!" << std::endl;
}

void ProgcomImpl::simplefunc(void){
    std::cout << "Progcom이 정의한 함수" << std::endl;
}

