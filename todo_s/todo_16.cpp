#include<iostream>
using std::cin;
using std::cout;

int f(int x, int y)
{
    if(y==0)
    {
      return 1;
    }
    else

      return x*f(x,y-1);
}


int main()
{

  int a,b;

  cin >> a;
  cin >> b;

  cout << f(a,b) << "\n";

  return 0;
}