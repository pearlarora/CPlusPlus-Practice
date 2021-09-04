#include<iostream>

using std::cin;
using std::cout;

int main() {
  int rows, columns;
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