#include <iostream>

int main() {
  int choice;
  double temp;
  char convertAgain = 'y';

  while (convertAgain == 'y') {
    std::cout << "Convert:\n1. Celsius to Fahrenheit\n2. Fahrenheit to "
                 "Celsius\nEnter your choice: ";
    std::cin >> choice;

    // TODO: if Celsius to Farhenheit
    if (choice == 1) {
      // TODO: convert to Fahrenheit and print to console
      std::cout << "Enter temperature in Celsius: ";
      std::cin >> temp;
      temp = (temp * 9.0 / 5.0) + 32.0;
      std::cout << temp << std::endl;
    }
    // TODO: if Fahrenheit to Celsius
    else if (choice == 2) {
      // TODO: convert to Celsius and print to console
      std::cout << "Enter temperature in Fahrenheit: ";
      std::cin >> temp;
      temp = (temp - 32.0) * 5.0 / 9.0;
      std::cout << temp << std::endl;
    } else {
      std::cout << "Invalid choice!" << std::endl;
    }

    std::cout << "Would you like to convert another temperature? [y/n]: ";
    std::cin >> convertAgain;
  }

  return 0;
}
