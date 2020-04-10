#include <iostream>
using std::cout;
using std::cin;
#include <string>
using std::string;

int main(void)
{
	int A[5];
	cout << A << "\n";
	for (size_t i = 0; i < 5; i++) {
		A[i] = i*i;
	}
	/* new thing: pointers.  They are variables that
	 * store memory addresses.  A is basically a
	 * pointer (with a small caveat). */
	/* pointer basics: to declare one: */
	int*p = A;
	cout << p << "\n";
	cout << A << "\n";
	cout << &A[0] << "\n";
	/* NOTE: to *read* from a memory address, use the star
	 * operator (*) (also called "dereference" operator)
	 * */
	cout << *p << "\n"; /* prints value of A[0] */
	cout << *(p+1) << "\n";
	cout << *(A+1) << "\n";
	cout << A[1] << "\n";
	cout << *(p+2) << "\n";
	cout << *(A+2) << "\n";
	cout << A[2] << "\n";
	/* NOTE: A[i] is a synonym for *(A+i) */

	return 0;
}
