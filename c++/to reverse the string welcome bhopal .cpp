#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str = "welcome bhopal";

    // Find the space position
    size_t spacePos = str.find(' ');

    // Split into two words
    std::string first = str.substr(0, spacePos);              // "welcome"
    std::string second = str.substr(spacePos + 1);            // "bhopal"

    // Reverse both
    std::reverse(first.begin(), first.end());                 // "emoclew"
    std::reverse(second.begin(), second.end());               // "lapohb"

    // Combine in reverse order
    std::string result = second + " " + first;

    std::cout << "Result: " << result << std::endl;

    return 0;
}

