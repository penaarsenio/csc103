#include<iostream>
using std::cin;
using std::cout;


int swap(int& x,int& y)
{
  int*a=&x;
  int*b=&y;
  int*c;

  c=a;
  a=b;
  b=c;

  cout << *a << " " << *b << "\n";

  return 0;
}


int main()
{
  int x,y;

  cin >> x >> y;

  swap(x,y);
  //cout << a << " " << b << "\n";
  //cout << x << " " << y << "\n";
  return 0;
}