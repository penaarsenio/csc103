#include<iostream>
using std::cin;
using std::cout;

int main()
{
  int n;
  while(cin>>n)
  {
  int original = n;
  int count = 0;

    while(n != 1)
    {
    count++;

      if(n % 2 == 0)
      {
      n /= 2;
      }
      else
      {
      n = n*3+1;
      }
    }
    //cout << original << " took " << count << " steps\n";
    cout << count << " steps for " << original << "\n";
  }

return 0;
}