/*
Write a program that tracks how many pages a student read each day over a week.

This version uses a vector instead of a fixed-size array.

The program should:
1. Ask the user to enter 7 values (pages read each day)
2. Store those values in a std::vector
3. Print how many pages were read each day
4. Print the total pages read at the end
*/

#include <iostream>
#include <vector>

int main() {
  std::vector<int> pages;
  int input;
  int total = 0;

  std::cout << "Enter pages read each day (7 days):\n";

  // Take user input
  for (int i{0}; i < 7; ++i) {

    // To add values to the end of a vector you can use the .push_back() method
    // ex: my_vector.push_back(1); would add the integer 1 to the end of the
    // vector
    std::cout << "Day " << (i + 1) << ": ";
    std::cin >> input;
    pages.push_back(input);
    total += input;
  }

  // Print the pages read each day
  for (int i = 0; i < pages.size(); ++i) {
    std::cout << "Day " << (i + 1) << ": " << pages[i] << " pages\n";
    total += pages[i];
  }

  // Print total pages
  std::cout << "\nTotal pages: " << total << std::endl;

  return 0;
}
