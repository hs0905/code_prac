#include<iostream>

void myfunc(int i) {
    std::cout << "myfunc(int i) called" << std::endl;
}

void myfunc(char c) {
    std::cout << "myfunc(char c) called" << std::endl;
}

void myfunc(int a, int b) {
    std::cout << "myfunc(int a, int b) called" << std::endl;
}

int main() {
    myfunc(0);
    myfunc('a');
    myfunc(0, 1);
    return 0;
}

