#include <iostream>

class ClockOfTheLongNow {
    int year{}; // braced initialization
public:
    ClockOfTheLongNow() {
        year = 2020;
    }

    explicit ClockOfTheLongNow(int year_in) {
        year = year_in;
    }

    void add_year() {
        year++;
    }

    int get_year() {
        return year;
    }
};


int main() {
    // encapsulation - bind data with the functions that manipulate it
    // related code in one place

    // information hiding - hide class code and data from the rest of your program
    // In c++ you achieve encapsulation by adding methods and access controls to class
    // definitions.


    // Methods are member functions.
    // Methods have access to all of a class's members

    // Access controls restrict class-member access.
    // Public and Private are the two major access controls
    // Anyone can access a public member, but only a class can access its private
    // members.

    // All struct members are public by default
    // All class members are private by default

    // Constructors initialize objects and enforce class invariants
    // Constructors don't declare a return type
    // Constructor's name matches the class's name

    // Destructors or an objects clean up function. Destructors are almost never called explicitly.
    // A compiler will ensure the object's destructor is called appropriately.
    // You can declare a class's descrutor with a ~
    // ~ClockOfTheLongNow();
    // Maybe you use a destructor for releasing file handles, flushing network sockets, and freeing dynamic objects
    // If you don't define a destructor, a default destructor is automatically generated.


    // create a ClockOfTheLongNow instance
    ClockOfTheLongNow clock{2019};
    ClockOfTheLongNow clock2{};

    // class invariant: a feature of a class that is always true (never varies)
    clock.add_year();
    std::cout << "Year: " << clock.get_year() << std::endl;
    std::cout << "Year (clock2): " << clock2.get_year() << std::endl;

    // initialize array to zeros
    int array_1[5]{};

    for (size_t number: array_1) {
        std::cout << number << std::endl;
    }
    return 0;
}
