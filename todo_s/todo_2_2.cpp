#include<iostream>
using std::cin;
using std::cout;

int main()
{

  double input;
  double sum;

  cout << "Enter the first number.\n";
  cin >> input;
  sum = input;
  cout << "Enter the second number.\n";
  cin >> input;
  sum = sum + input;
  cout << "Enter the third number.\n";
  cin >> input;
  sum = sum + input;
  cout << "Enter the fourth number.\n";
  cin >> input;
  sum = sum + input;
  cout << "Enter the fifth number.\n";
  cin >> input;
  sum = sum + input;
  cout << "Your average is: " << (sum)/5.0 << "\n";

return 0;

}