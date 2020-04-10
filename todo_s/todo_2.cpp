#include<iostream>
using std::cin;
using std::cout;

int main()
{

  int x1;
  int x2;
  int x3;

  cout << "Enter the first number.\n";
  cin >> x1;
  cout << "Enter the second number.\n";
  cin >> x2;
  cout << "Enter the third number.\n";
  cin >> x3;
  cout << "The average of your three numbers is: " << (x1+x2+x3)/3 << "\n";

  return 0;
}