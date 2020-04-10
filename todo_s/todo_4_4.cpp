#include<iostream>
using std::cin;
using std::cout;
#include<limits.h>

int main()
{

  int n;
  int smallest = INT_MAX;
  int second = INT_MAX ;

  while(cin>>n)
  {

    if(n <= smallest)
    {
      second = smallest;
      smallest = n;
    }
    else if(n<second)
    {
      second = n;
    }

  }

  cout << smallest << " " << second << " " <<  "\n";

  return 0;
}