#include <iostream>
#include <vector>

int main() {
  // pizza party
  std::string rsvp_responses[3] = {"yes", "no", "maybe"};

  // automatically order 1 pizza
  // automatically link to the ordering website

  // add to cart as responses roll in
  std::vector<std::string> responded_yes = {"Myself"};

  responded_yes.push_back("Johnny");
  responded_yes.push_back("Jane");

  // size of my array
  // int arrayLength = sizeof(rsvp_responses) / sizeof(rsvp_responses[0]);

  // array
  for (std::string response : rsvp_responses) {
    std::cout << response << std::endl;
  }

  // vector
  for (std::string response : responded_yes) {
    std::cout << response << std::endl;
  }

  return 0;
}
