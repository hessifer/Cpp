/*
Write a program that:

    Asks the user to enter their age (int)

    Asks for the number of tickets they want (int)

    Then asks for their full name (std::getline)

    Then asks for their favorite movie title (std::getline)

    Prints a reservation summary
*/

#include <iostream>
#include <limits>
#include <string>

int main() {
  int age;
  int tickets;
  std::string name;
  std::string movie;

  // TODO: Get age
  std::cout << "Enter your age: ";
  std::cin >> age;

  // TODO: Get number of tickets
  std::cout << "How many tickets would you like to purchase: ";
  std::cin >> tickets;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  // TODO: Get full name
  std::cout << "What is your full name: ";
  std::getline(std::cin, name);

  // TODO: Get favorite movie
  std::cout << "What is your favorite movie: ";
  std::getline(std::cin, movie);

  // TODO: Print the ticket summary
  std::cout << "\n\n" << std::endl;
  std::cout << "Customer Name: " << name << std::endl;
  std::cout << "Age: " << age << std::endl;
  std::cout << "Movie: " << movie << std::endl;
  std::cout << "Number of Tickets: " << tickets << std::endl;
  return 0;
}
