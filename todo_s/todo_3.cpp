#include<iostream>
using std::cin;
using std::cout;

int main()
{

  int n;
  int x = 0;
  int p = 1;
  int fp = 1;

  while (cin >> n)
  {
  fp *= n;
    //fp = n * p;
    //p = n;
  }
  cout << fp << "\n";
  return 0;
}