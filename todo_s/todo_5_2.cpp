#include<iostream>
using std::cin;
using std::cout;

int main()
{
  int n;
  int orig;
  int counter = 0;
  int max_numb = 0;

  while(cin>>n)
  {
    orig = n;
    counter = 0;
    while(n!=1)
    {
    if(n%2==0)
    {
      n /= 2;
    }
    else
      n = n*3+1;

    counter++;

    if(n>max_numb)
    {
      max_numb = n;
    }

    }
    cout << counter << " steps for " << orig << " maximal intermediate value: " << max_numb << "\n";
  }
  return 0;
}