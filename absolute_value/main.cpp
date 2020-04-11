#include <iostream>

int absolute_value(int x) {
    if (x >= 0) {
        return x;
    } else {
        return x * -1;
    }
}

int main() {
    int my_num = -10;
    std::cout << "The absolute value of " << my_num  << " is " << absolute_value(my_num) << "." << std::endl;
    return 0;
}
