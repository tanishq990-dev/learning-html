#include <iostream>
using namesp
ace std;

int main() {
    int n = 5; // Size of the swastik (should be odd)

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (i == 0 && (j >= n / 2 || j == 0)) cout << "* ";
            else if (i < n / 2 && (j == n / 2 || j == 0)) cout << "* ";

            else if (i == n / 2) cout << "* ";

            else if (i > n / 2 && (j == n - 1 || j == n / 2)) cout << "* ";
            else if (i == n - 1 && (j <= n / 2 || j == n - 1)) cout << "* ";

            else cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
