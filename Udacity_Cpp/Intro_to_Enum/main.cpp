#include <iostream>
using std::cout;

int main()
{
    // Create the enum Color with fixed values.
    // more data: https://en.cppreference.com/w/cpp/language/enum
    // 'class' creates a 'scoped' enum. you can omit 'class'
    // to create an 'unscoped' enum, but this is not recommended.
    // see why: https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Renum-class
    enum class Color {white, black, blue, red};

    // Create a Color variable and set it to Color::blue.
    Color my_color = Color::blue;

    // Test to see if my car is red.
    if (my_color == Color::red) {
        cout << "The color of my car is red!" << "\n";
    } else {
        cout << "The color of my car is not red." << "\n";
    }
}