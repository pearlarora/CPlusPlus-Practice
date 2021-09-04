// Rectangle
// Rows = 5
// Columns = 4
// Output:
// * * * *
// * * * *
// * * * *
// * * * *
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
      cout << "* ";
    }
    cout << "\n";
  }

  return 0;
}