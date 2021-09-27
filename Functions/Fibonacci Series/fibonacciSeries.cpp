#include<iostream>

using std::cin;
using std::cout;

int fibonacciSeries(int n) {
  int a = 0, b = 1, c;
  cout << a << " " << b << " ";
  for (int i = 2; i < n; i++)
  {
    c = a + b;
    a = b;
    b = c;
    cout << c << " ";
  }
  cout << "\n";

  return 0;
}

int main() {
  int n;
  cout << "Enter the number of terms in the series: ";
  cin >> n;

  fibonacciSeries(n);
}