#include <iostream>
#include <string>

int main() {
    std::string str = " my name is tanishq saxena   ";
    std::string result = "";

    for (char ch : str) {
        if (ch != ' ') {
            result += ch;
        }
    }

    std::cout << "Original: [" << str << "]\n";
    std::cout << "Without spaces: [" << result << "]\n";

    return 0;
}


