#include<iostream>
#include<math.h>

using std::cin;
using std::cout;

int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;

  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n%i == 0)
    {
      cout << "Not a prime number\n";
      exit(1);
    }
  }
  cout << "A prime number\n";

  return 0;
}