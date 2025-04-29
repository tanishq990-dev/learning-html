#include <iostream>
using namespace std;

int main() {
    int i = 1, sum = 0;

    while (i <= 10) {
        if (i % 2 != 0) {
            sum =sum+ i;
        }
        i++;
    }

    cout << "Sum of odd numbers from 1 to 10 is: " << sum << endl;

    return 0;
}
