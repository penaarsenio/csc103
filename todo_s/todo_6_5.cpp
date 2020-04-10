#include<iostream>
using std::cin;
using std::cout;

int fibon(int N)
{
  int n=1,abefore=1,acurrent=1,aafter=2,numbofsteps;

  while(n<N)
  {
    n++;
    abefore=acurrent;
    acurrent=aafter;
    aafter=abefore+acurrent;
    numbofsteps++;
  }
  cout << numbofsteps << " ";
  return aafter;
}

int main()
{
  int n;
  while(cin>>n)
  {
    cout << fibon(n) << "\n";
  }
  return 0;
}