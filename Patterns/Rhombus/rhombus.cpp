// Rhombus
// n = 5
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
  int n;
  cout << "Enter the number of rows: ";
  cin >> n;

  for (int i = n; i >= 1; i--) {
    for (int j = 1; j < i; j++) {
      cout << "  ";
    }
    for (int k = 1; k <= n; k++) {
      cout << "* ";
    }
    cout << "\n";
  }

  return 0;
}