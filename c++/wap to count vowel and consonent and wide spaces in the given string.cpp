#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
   cout << "Enter a string: ";
    getline(std::cin, str);

    int vowels = 0, consonants = 0, spaces = 0;

    for (char ch : str) {
        if (std::isspace(ch)) {
            spaces++;
        }
        else if (std::isalpha(ch)) {
            char lower = std::tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    std::cout << "Vowels: " << vowels << std::endl;
    std::cout << "Consonants: " << consonants << std::endl;
    std::cout << "White spaces: " << spaces << std::endl;

    return 0;
}
