#include<iostream>

using std::cin;
using std::cout;

int main() {
  int numberOfRows, numberOfColumns;
  cout << "Enter the number of rows: ";
  cin >> numberOfRows;
  numberOfColumns = numberOfRows * 2;

  for (int i = 1; i <= numberOfRows; i++) {
    for (int j = 1; j <= numberOfColumns; j++) {
      if ( j <= i || j > (numberOfColumns - i) ) {
        cout << "* ";
      }
      else {
        cout << "  ";
      }
    }
    cout << "\n";
  }
  for (int i = numberOfRows; i >= 1; i--) {
    for (int j = numberOfColumns; j >= 1; j--) {
      if ( j <= i || j > (numberOfColumns - i) ) {
        cout << "* ";
      }
      else {
        cout << "  ";
      }
    }
    cout << "\n";
  }
}