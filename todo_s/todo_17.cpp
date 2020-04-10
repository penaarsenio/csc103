#include<iostream>
using std::cin;
using std::cout;

void printvertically(int x)
{
  if (x < 10)
  {

  }
  else
    printvertically(x/10);
    cout << x % 10 <<  "\n";
}

int main()
{

  int n;
  cin >> n;
  printvertically(n);


  return 0;
}