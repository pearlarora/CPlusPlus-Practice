#include<iostream>

using std::cin;
using std::cout;

int factorial(int n) {
  int fact = 1;
  for (int i = 2; i <= n; i++)
  {
    fact *= i;
  }

  return fact;
}

int main() {
  int n;
  cout << "Enter a number to find the factorial: ";
  cin >> n;

  int fact = factorial(n);
  cout << "The factorial of the entered number is " << fact << "\n";

  return 0;
}