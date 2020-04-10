#include<iostream>
using std::cin;
using std::cout;

bool prime(int n)
{
  bool isprime = false;
  int k;
  int counter = 0;
  k = n-1;

  while(k!=0)
  {
    if(n%k==0)
    {
      counter++;
      k--;
    }
    else if(n%k!=0)
    {
      k--;
    }
    if(counter>=2)
    {
      isprime = false;
    }
    else
      isprime = true;
    }
  return isprime;
}

int main()
{
  int n;
  while(cin>>n)
  {
    cout << prime(n) << "\n";
  }
  return 0;
}