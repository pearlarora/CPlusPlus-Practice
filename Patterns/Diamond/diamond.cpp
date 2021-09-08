// Diamond
// n = 4
// Output:
//       * 
//     * * * 
//   * * * * * 
// * * * * * * * 
// * * * * * * * 
//   * * * * * 
//     * * * 
//       * 

#include<iostream>

using std::cin;
using std::cout;

int main() {
  int n;
  cout << "Enter the number of rows: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n-i-1; j++)
    {
      cout << "  ";
    }
    for (int k = 0; k <= 2*i; k++)
    {
      cout << "* ";
    }
    cout << "\n";
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << "  ";
    }
    for (int k = 0; k < 2*(n-i)-1; k++)
    {
      cout << "* ";
    }
    cout << "\n";
  }

  return 0;
}