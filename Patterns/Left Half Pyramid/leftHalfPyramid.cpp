// Left Half Pyramid using Numbers
// n = 5
// Output:
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

#include<iostream>

using std::cin;
using std::cout;

int main() {
  int n;
  cout << "Enter the number of rows: ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << i << " ";
    }
    cout << "\n";
  }

  return 0;
}