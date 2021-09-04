// Floyd's Triangle
// numberOfRows = 5
// Output:
// 1
// 2  3
// 4  5  6
// 7  8  9  10
// 11 12 13 14 15

#include<iostream>

using std::cin;
using std::cout;

int main() {
  int numberOfRows, count = 1;
  cout << "Enter the number of rows: ";
  cin >> numberOfRows;

  for (int i = 0; i < numberOfRows; i++) {
    for (int j = 0; j <= i; j++, count++) {
      cout << count << " ";
    }
    cout << "\n";
  }

  return 0;
}