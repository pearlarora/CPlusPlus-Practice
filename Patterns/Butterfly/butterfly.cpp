// Butterfly
// rows = 3
// Output:
// *         * 
// * *     * * 
// * * * * * * 
// * * * * * * 
// * *     * * 
// *         * 

#include<iostream>

using std::cin;
using std::cout;

int main() {
  int rows, columns;
  cout << "Enter the number of rows: ";
  cin >> rows;
  columns = rows * 2;

  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= columns; j++) {
      if ( j <= i || j > (columns - i) ) {
        cout << "* ";
      }
      else {
        cout << "  ";
      }
    }
    cout << "\n";
  }
  for (int i = rows; i >= 1; i--) {
    for (int j = columns; j >= 1; j--) {
      if ( j <= i || j > (columns - i) ) {
        cout << "* ";
      }
      else {
        cout << "  ";
      }
    }
    cout << "\n";
  }

  return 0;
}