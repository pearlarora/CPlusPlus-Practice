// Pascal's Triangle
// rows = 5
// Output:
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

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

int combination(int n, int r) {
  return (factorial(n) / (factorial(n - r) * factorial(r)));
}

int main() {
  int rows;
  cout << "Enter the number of rows: ";
  cin >> rows;

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << combination(i, j) << " ";
    }
    cout << "\n";
  }

  return 0;
}