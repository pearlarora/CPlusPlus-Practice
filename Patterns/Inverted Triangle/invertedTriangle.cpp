// Inverted Triangle
// numberOfRows = 5
// Output:
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 

#include<iostream>

using std::cin;
using std::cout;

int main() {
  int numberOfRows;
  cout << "Enter the number of rows: ";
  cin >> numberOfRows;

  for (int i = numberOfRows; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      cout << j << " ";
    }
    cout << "\n";
  }
}