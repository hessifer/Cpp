#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main() {
    // Initialize Vector
    vector<int> v = {1, 2, 3};

    for (int i : v) {
        cout << i << "\n";
    }

    // Push 4 to the back of the vector
    v.push_back(4);

    // Display the contents again
    for (int i : v) {
        cout << i << "\n";
    }
    return 0;
}
