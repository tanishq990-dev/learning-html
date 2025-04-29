#include<iostream> // includes the input-output stream library
using namespace std;

int main()
{
    // Step 1: Ask the user to enter how many elements they want
    cout << "Enter the number of elements:" << endl;
    int n;
    cin >> n; // takes the value from the user and stores it in n

    // Step 2: Create an array of size n
    int arr[n];

    // Step 3: Input elements in the array
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i]; // store the entered value directly in arr[i]
    }

    // Step 4: Sort the array in ascending order using a simple method (bubble sort logic)
    for (int m = 0; m < n - 1; m++)
    {
        for (int k = m + 1; k < n; k++)
        {
            if (arr[m] > arr[k])
            {
                // swap arr[m] and arr[k]
                int temp = arr[m];
                arr[m] = arr[k];
                arr[k] = temp;
            }
        }
    }

    // Step 5: Print the sorted array
    cout << "Sorted elements are:" << endl;
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << endl;
    }

    return 0;
}

