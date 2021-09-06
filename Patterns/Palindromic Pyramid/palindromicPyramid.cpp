#include<iostream>

using std::cin;
using std::cout;

int main() {
  int numberOfRows;
  cout << "Enter the number of rows: ";
  cin >> numberOfRows;

  for (int i = 1; i <= numberOfRows; i++) {
    for (int j = 1; j <= (numberOfRows-i) ; j++) {
      cout << "  ";
    }
    for (int k = i; k >= 1; k--) {
      cout << k << " ";
    }
    for (int l = 2; l <= i; l++) {
      cout << l << " ";
    }
    cout << "\n";
  }

  return 0;
}