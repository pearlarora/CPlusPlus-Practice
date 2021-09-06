// 0-1 Left Pyramid
// numberOfRows = 5
// Output:
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1

#include<iostream>

using std::cin;
using std::cout;

int main() {
  int numberOfRows;
  cout << "Enter the number of rows: ";
  cin >> numberOfRows;

  for (int i = 0; i < numberOfRows; i++) {
    for (int j = 0; j <= i; j++) {
      if ((i+j) % 2 == 0) {
        cout << "1 ";
      }
      else {
        cout << "0 ";
      }
    }
    cout << "\n";
  }

  return 0;
}