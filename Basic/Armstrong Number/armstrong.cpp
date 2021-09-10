// Armstrong number is a number that is equal to the sum of cubes of its individual digits. 
// For example: 153
// 153 = (1*1*1)+(5*5*5)+(3*3*3)  
// Where:  
// (1*1*1)=1  
// (5*5*5)=125  
// (3*3*3)=27  
// So:  
// 1+125+27=153  

#include<iostream>

using std::cin;
using std::cout;

int main() {
  int n, num, temp, sum = 0;
  cout << "Enter the number: ";
  cin >> n;
  num = n;

  while (n > 0)
  {
    temp = n % 10;
    sum += (temp * temp * temp);
    n = n / 10;
  }
  if (num == sum)
  {
    cout << num << " is an Armstrong number.\n";
    exit(1);
  }
  cout << num << " is not an Armstron number.\n";

  return 0;
}