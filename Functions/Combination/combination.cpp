#include<iostream>

using std::cin;
using std::cout;

int factorial(int num) {
  int fact = 1;
  for (int i = 2; i <= num; i++)
  {
    fact *= i;
  }

  return fact;
}

int main() {
  int n, r;
  cout << "Enter the value of n: ";
  cin >> n;
  cout << "Enter the value of r: ";
  cin >> r;

  cout << "nCr = " << factorial(n) / (factorial(n - r) * factorial(r));
  cout << "\n";
}