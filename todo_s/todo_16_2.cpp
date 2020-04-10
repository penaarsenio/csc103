#include<iostream>
using std::cin;
using std::cout;

int f(int x)
{

  if(x==0)
  {
    return 0;
  }
  else if (x==1)
  {
    return 1;
  }
  else
    return f(x-1) + f(x-2);
}


int main()
{
  int n;

  cin >> n;

  cout << f(n);

  return 0;
}