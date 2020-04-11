#include <iostream>

int main() {
    unsigned short a = 0b1010; // 2 bytes
    int b = 0123;
    unsigned long long d = 0xFFFFFFFF;
    char32_t letter = '\u0041';

    std::cout << "The decimal value of binary 1010 is " << a << "." << std::endl;
    std::cout << "The integer value stored in b is " << b << "." << std::endl;
    std::cout << "The decimal value of hex FFFFFFFF is " << d << "." << std::endl;

    std::cout << "It is Friday and time for " << letter << "." << std::endl;
    return 0;
}
