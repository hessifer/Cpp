#include <iostream>

enum class Operation {
    Add,
    Subtract,
    Multiply,
    Divide
};

struct Calculator {
    Operation operation{};
public:
    explicit Calculator(Operation action) {
        operation = action;
    }

    int calculate(int a, int b) {
        switch (operation) {
            case Operation::Add: {
                return a + b;
            }
            case Operation::Subtract: {
                return a - b;
            }
            case Operation::Divide: {
               return a / b;
            }
            case Operation::Multiply: {
                return a * b;
            }
            default: {
                return -1;
            }
        }
    }
};

int main() {
    int num1{5};
    int num2{10};
    Calculator calc{Operation::Multiply};
    size_t result= calc.calculate(num1, num2);

    std::cout << num1 << " * " << num2 << " is: " << result << std::endl;
    return 0;
}
