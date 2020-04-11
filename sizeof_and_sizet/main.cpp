#include <iostream>

void say_hello() {
    std::cout << "Hello!" << std::endl;
}

int main() {
    std::size_t char_size = sizeof(char);
    std::size_t int_size = sizeof(int);
    std::size_t short_size = sizeof(short);
    std::size_t long_size = sizeof(long);
    std::size_t long_long_size = sizeof(long long);

    std::cout << "The size in bytes for a char is: " << char_size << std::endl;
    std::cout << "The size in bytes for a int is: " << int_size << std::endl;
    std::cout << "The size in bytes for a short is: " << short_size << std::endl;
    std::cout << "The size in bytes for a long is: " << long_size << std::endl;
    std::cout << "The size in bytes for a long long is: " << long_long_size << std::endl;
    say_hello();

    return 0;
}
