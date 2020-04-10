#include <iostream>
using std::cin;
using std::cout;

/* by value vs by reference parameters.  Try
 * to understand output of the following: */

int f1(int x)
{
	x = x+10;
	return x;
}

int f2(int& x)
{
	x = x+10;
	return x;
}

int main(void)
{
	int y = 2;
	int z = f1(y);
	cout << "z = " << z << " y = " << y << "\n";
	/* NOTE: y did not change!  The "formal parameter" (x)
	 * is a *copy* of the "actual parameter" (y).  This is
	 * the default behavior for C++ functions, and is the
	 * *only* behavior for C functions.  This behavior is
	 * called "by value". */
	z = f2(y);
	cout << "z = " << z << " y = " << y << "\n";
	/* NOTE: now y does change.  It is because of the ampersand
	 * (&) in the int& x.  This is called "by reference"
	 * parameter passing. */
	/* Summary:
	 * * No ampersand (&):   x is a COPY of y.
	 * * With the ampersand: x is a SYNONYM for y.
	 *   That is, x and y are two different names
	 *   for the exact same memory location!
	 * */
	return 0;
}
