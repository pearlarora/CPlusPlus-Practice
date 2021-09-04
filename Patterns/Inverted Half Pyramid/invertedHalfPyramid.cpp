// Inverted Half Pyramind
// numberOfRows = 5
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
  int numberOfRows;
  cout << "Enter the number of rows for the pyramid: ";
  cin >> numberOfRows;
  for (int i = numberOfRows; i > 0; i--) {
    for (int j = i; j > 0; j--) {
      cout << "* ";
    }
    cout << "\n";
  }

  return 0;
}