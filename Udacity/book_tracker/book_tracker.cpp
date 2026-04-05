/*
Write a program that tracks how many pages a student read each day over a week.

Your program should use the pages array and print out the amount of pages read
each day of the week

Lastly, your program should print the total pages read for the week at the end
*/

#include <iostream>

int main() {
  int pages[7] = {10, 15, 12, 14, 15, 40, 60};
  int total = 0;
  int arrayLength = sizeof(pages) / sizeof(pages[0]);

  // Print pages for each day of the week
  for (int i{0}; i < arrayLength; ++i) {
    std::cout << pages[i] << std::endl;
    // Keep a track of total pages read
    total += pages[i];
  }

  // Print total pages
  std::cout << "\nTotal pages: " << total << std::endl;

  return 0;
}
