// Right Half Pyramid 
// numberOfRows = 5
// Output:
//         *
//       * *
//     * * *
//   * * * *
// * * * * *

#include<iostream>

using std::cin;
using std::cout;

int main() {
  int numberOfRows;
  cout << "Enter the number of rows: ";
  cin >> numberOfRows;

  for (int i = 1; i <= numberOfRows; i++) {
    for (int j = 1; j <= numberOfRows; j++) {
      if ( j <= (numberOfRows-i) ) {
        cout << "  ";
      }
      else {
        cout << "* ";
      }
    }
    cout << "\n";
  }

  return 0;
}