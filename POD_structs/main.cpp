#include <iostream>

// organize members from largest to smallestA
// members are sequential in memory
struct Book {
    char name[256];
    int year;
    int pages;
    bool hardcover;
};

// similar to struct (POD), but variants use same memory space, dangerous to use, you need to keep
// track of which interpretation (data type) is valid at the time.
union Variant {
    char string[1];
    int integer;
    double floating_point;
};

int main() {
    Book neuromancer{}; // initialize to null value
    neuromancer.pages = 271;

    std::cout << "The book Neuromancer has " << neuromancer.pages << " pages." << std::endl;
    return 0;
}
