#include<iostream>
using std::cin;
using std::cout;
#include<cmath>

int main()
{

  int n;
  int sum = 0;
  int odd_cube;

  while(cin>>n)
  {
  odd_cube = pow(n,3);
  sum = sum + odd_cube;
  }
  cout << sum;
return 0;
}