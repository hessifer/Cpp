#include <iostream>

int main() {
    int numbers[5];
    int more_numbers[] = {5, 6, 7};

    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
    numbers[4] = 5;

    for (std::size_t i = 0; i < 5; i++) {
        std::cout << "Value of numbers[" << i << "] is: " << numbers[i] << std::endl;
    }

    for (std::size_t i = 0; i < 3; i++) {
        std::cout << "Value of more_numbers[" << i << "] is: " << more_numbers[i] << std::endl;
    }

    // ranged for loop
    for (std::size_t number : numbers) {
        std::cout << number << std::endl;
    }

    // calculate array length and use for to view elements fo array
    size_t array_size = sizeof(numbers) / sizeof(int); // compile time cost, not run time
    std::cout << array_size << std::endl;

    for (std::size_t i = 0; i < array_size; i++) {
        std::cout << numbers[i] << std::endl;
    }

    // std::size can bew used with any container that exposes a size method.
    size_t more_numbers_size = std::size(more_numbers);
    std::cout << "More Numbers Size: " << more_numbers_size << std::endl;

    return 0;
}
