#include<iostream>
using std::cin;
using std::cout;

int main()
{
  int n = 1;
  int abefore = 1;
  int acurrent = 1;
  int aafter = 2;
  int N;
  cin >> N;

  while (n<N)
  {
  n++;
  abefore = acurrent;
  acurrent = aafter;
  aafter = abefore + acurrent;
  }
  cout << acurrent << "\n";
return 0;
}