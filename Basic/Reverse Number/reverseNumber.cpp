#include<iostream>
#include<math.h>

using std::cin;
using std::cout;

int main() {
  int n, temp, r = 0;
  cout << "Enter the number: ";
  cin >> n;

  while (n > 0)
  {
    temp = n % 10;
    r = (r * 10) + temp;
    n = n / 10;
  }
  cout << "The reverse of the entered number is " << r << "\n";

  return 0;
}