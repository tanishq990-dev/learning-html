#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string str1 ="madarchod";
    std::string str2 = "madarchod";

    // If lengths are not equal, they can't be anagrams
    if (str1.length() != str2.length()) {
        std::cout << "Not anagrams" << std::endl;
        return 0;
    }
     // Sort both strings
    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());



    // Compare sorted strings
    if (str1 == str2) {
        std::cout << "They are anagrams" << std::endl;
    } else {
        std::cout << "Not anagrams" << std::endl;
    }

    return 0;
}

