#include<iostream>

using std::cin;
using std::cout;

int main() {
  // To use spearate .txt files for input and output
  #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
  #endif

  int rows, columns;
  cin >> rows >> columns;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++) {
      cout << "* ";
    }
    cout << "\n";
  }

  return 0;
}