#include<iostream>
using std::cin;
using std::cout;

int main()
{
  int n;
  int orig;
  int counter=0;
  while(cin>>n)
  {
    orig = n;
    while(n!=1)
    {
    if(n%2==0)
    {
      n /= 2;
    }
    else
      n = n*3+1;

    counter++;
    }
    cout << counter << " steps for " << orig << "\n";
  }
  return 0;
}