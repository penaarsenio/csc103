#include<iostream>
using std::cin;
using std::cout;

void merge(int* L, size_t nL, int* R, size_t nR, int* S)
{
  while(nL>0 && nR>0)
  {
    if(*L<*R)
    {
      *S=*L;
      L++;nL--;
    }
    else

      *S=*R;;
      R++;nR--;
    S++;
  }
  while(nL>0)
  {
    *S=*L;
    L++;nL--;
    S++;
  }
  while(nR>0)
  {
    *S=*R;
    R++;nR--;
    S++;
  }
}

int main()
{
  int L[4] = {1,2,3,4};
  int R[4] = {5,6,7,8};
  int S[8] = {};
  cout << R[0] << "\n";
  merge(L,4,R,4,S);

  for(size_t i = 0; i < 8; i++)
  {
    cout << S[i] << " ";
  }
  cout << "\n";


  return 0;
}