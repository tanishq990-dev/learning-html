#include <iostream>
using namespace std;

int main() {
    int n = 5; // Size of the swastik (should be odd)

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Top half
            if (i == 0 && (j >= n / 2 || j == 0)) cout << "* ";
            else if (i < n / 2 && (j == n / 2 || j == 0)) cout << "* ";
            // Middle row
            else if (i == n / 2) cout << "* ";
            // Bottom half
            else if (i > n / 2 && (j == n - 1 || j == n / 2)) cout << "* ";
            else if (i == n - 1 && (j <= n / 2 || j == n - 1)) cout << "* ";
            // Else print space
            else cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
