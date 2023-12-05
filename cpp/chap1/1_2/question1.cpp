#include<iostream>

void swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void swap(char& a, char& b) {
    char tmp = a;
    a = b;
    b = tmp;
}

void swap(double& a, double& b) {
    double tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int a = 1, b = 2;
    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;

    char c = 'c', d = 'd';
    swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;

    double e = 1.2, f = 3.4;
    swap(e, f);
    std::cout << "e = " << e << ", f = " << f << std::endl;

    return 0;
}

