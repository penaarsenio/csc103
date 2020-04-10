#include<iostream>
using std::cin;
using std::cout;
#include<limits.h>

int main()
{
  int x;
  x = INT_MAX;
  int n;
  int sum = 0;
  int previous_variable = 0;
  while (cin >> n)
  {
  sum+=n;
    if (n < x)
    {
    x = n;
    }
  //sum = n + previous_variable;
  //previous_variable = n;
  }
  cout << "Smallest number was " << x << "   "  <<  sum << "\n";
return 0;
}
