// Number Pyramid
// n = 5
// Output:
//     1 
//    1 2 
//   1 2 3 
//  1 2 3 4 
// 1 2 3 4 5

#include<iostream>

using std::cin;
using std::cout;

int main() {
  int n;
  cout << "Enter the number of rows: ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= (n-i) ; j++) {
      cout << " ";
    }
    for (int k = 1; k <= i; k++) {
      cout << k << " ";
    }
    cout << "\n";
  }

  return 0;
}