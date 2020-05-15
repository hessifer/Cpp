#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using std::cout;

int main ()
{
    string a("199 2 3");

    istringstream my_stream(a);

    int n;

    // keep going while we have something to stream
    while (my_stream) {
        my_stream >> n;
        // if we can grab from the stream
        if (my_stream) {
            cout << "That stream was successful: " << n << "\n";
        } else {
            cout << "That stream was NOT successful!" << "\n";
        }
    }
}