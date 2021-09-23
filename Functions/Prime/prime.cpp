// To print all the prime numbers between two numbers
#include<iostream>
#include<math.h>

using std::cin;
using std::cout;

int isPrime(int n) {
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n%i == 0)
    {
      return false;
      exit(1);
    }
  }
  return true;
}

int main() {
  int a, b;
  cout << "Enter the two numbers:\n";
  cin >> a >> b;
  for (int i = a+1; i < b; i++) {
    if (isPrime(i))
    {
      cout << i << " ";
    }
  }
}