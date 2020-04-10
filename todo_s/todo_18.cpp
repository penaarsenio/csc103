#include<iostream>
using std::cin;
using std::cout;

int gcd(int a, int b)
{
  if(b==0)
  {
    return a;
  }
  else
    return gcd(b,a%b);

  return 0;
}

int main()
{
  int x,y;
  cin >> x >> y;
  cout << x << " " << y << " " << gcd(x,y) << "\n";

  return 0;
}