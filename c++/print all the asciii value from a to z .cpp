#include <iostream>

int main() {
    std::cout << "ASCII values from A to Z:\n";
    for (char ch = 'A'; ch <= 'Z'; ++ch) {
        std::cout << ch << " = " << int(ch) << std::endl;
    }

    std::cout << "\nASCII values from a to z:\n";
    for (char ch = 'a'; ch <= 'z'; ++ch) {
        std::cout << ch << " = " << int(ch) << std::endl;
    }

    return 0;
}

