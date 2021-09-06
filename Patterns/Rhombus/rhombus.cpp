// Rhombus
// numberOfRows = 5
// Output:
//         * * * * * 
//       * * * * * 
//     * * * * * 
//   * * * * * 
// * * * * *

#include<iostream>

using std::cin;
using std::cout;

int main() {
  int numberOfRows;
  cout << "Enter the number of rows: ";
  cin >> numberOfRows;

  for (int i = numberOfRows; i >= 1; i--) {
    for (int j = 1; j < i; j++) {
      cout << "  ";
    }
    for (int k = 1; k <= numberOfRows; k++) {
      cout << "* ";
    }
    cout << "\n";
  }

  return 0;
}