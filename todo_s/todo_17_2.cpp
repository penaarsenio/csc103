#include<iostream>
using std::cin;
using std::cout;

bool search(int* A,int size,int x)
{

  int mid = size/2;

  if (size < 1)
  {
    cout << "no\n";
    return false;
  }
  if(A[mid]==x)
  {
    cout << "yes\n";
    return true;
  }
  else if(A[mid] < x)
  {
    cout << 1 << "\n";
    search(A,size+1,x);
  }
  else if(A[mid] > x)
  {
    cout << 2 << "\n";
    search(A,size-1,x);
  }

}

int main()
{

  int A[10] = {1,3,2,4,5,7,6,8,9,10};
  cout << search(A,10,20) << "\n";
  return 0;
}