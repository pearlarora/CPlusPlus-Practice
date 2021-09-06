// Hollow Rectangle
// rows = 5
// columns = 4
// Output: 
// * * * *
// *     *
// *     *
// *     *
// * * * *

#include<iostream>

using std::cin;
using std::cout;

int main() {
  int rows, columns;
  cout << "Enter the number of rows and columns: \n";
  cin >> rows >> columns;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      if (i==0 || i==(rows-1) || j==0 || j==(columns-1)) {
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