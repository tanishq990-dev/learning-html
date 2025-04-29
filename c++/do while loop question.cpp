#include<iostream>
using namespace std;
int main()
{

    int n,sum = 0, i = 1;

    cout << "Enter a number: ";
    cin >> n;

    do {
        sum += i;

        i++;
    } while(i <= n);

    cout << "Sum = " << sum << endl;

    return 0;
}


