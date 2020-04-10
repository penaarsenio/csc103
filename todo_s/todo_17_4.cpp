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

void mergeSort(int* A, size_t n, int* aux)
{
	if(n<2) return;
  int mid = n/2;
  mergeSort(A,mid);
  mergeSort(A+mid,n-mid);
  merge(A,A+mid,A,n-mid);
}

int main()
{

  /* how to call merge sort: */
	int A[10] = {33,2,19,6,7,91,22,71,18,49};
	int aux[10]; /* auxillary space for merging. */
	mergeSort(A,10,aux);
	for (size_t i = 0; i < 10; i++) {
		printf("A[%lu] = %i\n",i,A[i]);
	}

  return 0;
}