#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cstdio>

// TODO: write a recursive function that prints the base 10 digits of n
// vertically to cout.  for example, printVertically(2358) would print
// 2
// 3
// 5
// 8
// Rules: you can't use any loops.  You can't use vectors or arrays.
// Just let the recursive function calls do the work for you.
void printVertically(unsigned long n)
{
	// your code goes here.
}

bool search(int* A, int size, int x)
{
	/* TODO: Try to write a recursive version of binary search.
	 * Outline:
	 * 1. if the array is empty (size < 1) return false.
	 * 2. if x is less than the value in the middle, recursively search
	 *    the left subarray, else recursively search the right subarray.
	 * Test out your program, and try to prove (by induction) that it works.
	 * (There are some subtle points about making sure the size is always
	 * decreasing...)
	 * */
	return false;
}

/* TODO: try to write down that recursive sorting algorithm we outlined
 * during class.  This might not be easy, but it's a good exercise.  To
 * help you get started, here are some plausible prototypes:
 * */

/* merge L and R (which are both sorted, and of sizes nL,nR respectively)
 * into the array S (which you can assume has enough space). */
void merge(int* L, size_t nL, int* R, size_t nR, int* S)
{
}

/* Sort the array A (of size n) using the array aux (which should
 * also have at least n elements) as auxillary storage for the
 * merge operations (see merge(...) above).  */
void mergeSort(int* A, size_t n, int* aux)
{
	/* IDEA: take care of a base case (like, say n < 2), and
	 * then break array in two equal(-ish) pieces and recursively
	 * sort both.  Then use the merge function to recombine them
	 * into a completely sorted array.  See example call from main().
	 * */
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
