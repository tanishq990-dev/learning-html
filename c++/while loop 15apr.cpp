#include<iostream>
using namespace std;
int main()

{



  int number;
  int sum = 0;

  std::cout << "Enter numbers to sum (enter a non-number to stop):\n";

  while (std::cin >> number) {
    sum += number;
  }

  std::cout << "\nThe sum of the numbers is: " << sum << std::endl;

  return 0;
}







