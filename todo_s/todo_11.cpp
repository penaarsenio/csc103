#include<iostream>
using std::cin;
using std::cout;

int main()
{
  int x = 17;
  int* p = &x;
  char A = 'a';
  char* p2 = &A;

  for(int i = 0; i < 10; i++)
  {
    cout << "(p+i) is " << (p+i) << "\n";
  }
  for(int i = 0; i < 10; i++)
  {
    cout << "(p2+i) is " << (p2+i) << "\n";
  }

  return 0;
}