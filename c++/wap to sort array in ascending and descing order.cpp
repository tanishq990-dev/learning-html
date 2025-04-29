#include <iostream>
#include <algorithm> // for sort and reverse
using namespace std;

int main() {
    int arr[] = {5, 2, 8, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sorting in ascending order
    sort(arr, arr + n);

    cout << "Array in ascending order: ";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sorting in descending order
    sort(arr, arr + n, greater<int>());

    cout << "Array in descending order: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
