#include <iostream>
#include <string>
#include <fstream>
using std::ifstream;
using std::string;
using std::cout;
using std::endl;

void ReadFile(string path) {
    ifstream my_file(path);
    if (my_file) {
        string line;
        while (getline(my_file, line)) {
            cout << line << endl;
        }
    }
}
int main() {
    string file = "/etc/passwd";
    ReadFile(file);
    return 0;
}
