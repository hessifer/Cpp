#include <iostream>

int main() {
    char greeting[] = "good morning to you kind sir.";
    char16_t chinese[] = u"\u4e66\u4e2d\u81ea\u6709\u9ec4\u91d1\u5c4b";

    std::cout << greeting << std::endl;
    std::cout << chinese << std::endl;

    // printing letters of alphabet
    char alphabet[27];

    for (size_t i = 0; i < std::size(alphabet) - 1; i++) {
        alphabet[i] = i + 97;
    }
    alphabet[26] = 0;
    std::cout << alphabet << std::endl;

    for (size_t i = 0; i < 26; i++) {
        alphabet[i] = i + 65;
    }
    std::cout << alphabet << std::endl;
    return 0;
}
