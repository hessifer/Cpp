#include <iostream>
#include <numeric>
#include <vector>

void sumSTD();

int main() {
  std::vector<int> nums = {1, 2, 3, 4};
  int sumManual = 0;

  for (int i = 0; i < nums.size(); ++i) {
    sumManual += nums[i];
  }

  std::cout << "Sum Manual: " << sumManual << std::endl;

  sumSTD();
}

void sumSTD() {
  std::vector<int> nums = {1, 2, 3, 4};
  int sum = std::accumulate(nums.begin(), nums.end(), 0);

  std::cout << "Sum STD: " << sum << std::endl;
}
