#include<iostream>
using std::cin;
using std::cout;

int main()
{
  int number = 0;
  int original_number;
  int divider = 0;
  int power = 0;

  cout << "Please enter the integer.\n";
  cin >> number;
  cout << "Please enter the divider\n";
  cin >> divider;
  original_number = number;

  while(number % divider == 0)
  {
    power++;
    number /= divider;

  }

  cout << original_number << " " << power << "\n";

return 0;
}