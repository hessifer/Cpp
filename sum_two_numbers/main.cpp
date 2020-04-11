#include <iostream>

int sum_two_numbers(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int number1 = 5;
    int number2 = 10;

    std::cout << "The sum of " << number1 << " and " << number2 << " is " << sum_two_numbers(number1, number2
    ) << "." << std::endl;
    return 0;
}
