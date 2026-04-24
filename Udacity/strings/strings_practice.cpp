#include <iostream>
#include <string>

int main() {
  // std::string

  // .length()

  // .substr(int, int)

  // .find("", int)

  std::string poem = "The quick brown fox jumped over the lazy dog";

  int lengthPoem = poem.length();
  std::cout << "The lenght of the poem is: " << lengthPoem << std::endl;

  // note: .find("", int) returns a size_t
  std::string firstHalf = poem.substr(0, poem.find("jumped") - 1);
  std::cout << "The first half of the poem is: " << firstHalf << std::endl;
}
