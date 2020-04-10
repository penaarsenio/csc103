#include<iostream>
using std::cin;
using std::cout;


int main()
{
  int n;
  int max_number = 0;

  cin >> n;

  while(n % 2 == 0)
  {
    n = n / 2;
    max_number++;
  }

  cout << max_number << "\n";

return 0;
}