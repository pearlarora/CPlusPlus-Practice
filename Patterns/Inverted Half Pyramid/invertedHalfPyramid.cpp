// Inverted Half Pyramind
// n = 5
// Output:
// * * * * *
// * * * *
// * * *
// * *
// *

#include<iostream>

using std::cin;
using std::cout;

int main() {
  int n;
  cout << "Enter the number of rows for the pyramid: ";
  cin >> n;
  
  for (int i = n; i > 0; i--) {
    for (int j = i; j > 0; j--) {
      cout << "* ";
    }
    cout << "\n";
  }

  return 0;
}