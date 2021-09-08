// Right Half Pyramid 
// n = 5
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
  int n;
  cout << "Enter the number of rows: ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if ( j <= (n-i) ) {
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