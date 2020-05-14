#include <iostream>
#include <string>
#include <fstream>

int main() {
    std::ifstream my_file("/etc/passwd");

    if (my_file) {
        std::cout << "File stream created successfully." << std::endl;
        std::string line;

        while (getline(my_file, line)) {
            std::cout << line << std::endl;
        }
    }
    return 0;
}
