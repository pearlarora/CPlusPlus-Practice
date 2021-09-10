// Zig-Zag
// n = 9
// Output:
//     *       *     
//   *   *   *   *   
// *       *       * 

#include<iostream>

using std::cin;
using std::cout;

int main() {
  int n;
  cout << "Ente the number of points: ";
  cin >> n;

  for (int i = 1; i <= 3; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (((i+j)%2 == 0 && i%2 == 0) || ((i+j)%4 == 0))
      {
        cout << "* ";
      }
      else 
      {
        cout << "  ";
      }
    }
    cout << "\n";
  }

  return 0;
}