/* More about loops.
 * See lectures 4,5,6 from Prof. Li. */

// the usual stuff:
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* Collatz conjecture: for all integers n, the following process
	 * will terminate in a finite number of steps:
	 *    if n == 1, stop;
	 *    if n is even, divide by 2;
	 *    if n is odd, multiply by 3 and add 1;
	 *    repeat using this new value of n.
	 * */
	/* exercise: write a program that tests the conjecture for arbitrarily
	 * many integers, provided on standard input.  (Just print the input
	 * and the number of steps it required before terminating.) */
	int n;
	while (cin >> n) {
		int original = n;
		int count = 0;
		/* run the test: */
		while (n != 1) {
			count++;
			if (n % 2 == 0) {
				n /= 2;
			}
			else {
				n = n*3 + 1;
			}
		}
		cout << count << " steps for " << original << "\n";
	}
	return 0;
}

/* TODO: delete the entire thing and rewrite it from scratch. */
/* TODO: try to understand the bash commands for printing the largest
 * number of steps required (I saved some in the 'bash-history' file). */
/* TODO: keep track of the maximal intermediate value and print that out
 * along with the result. */

// vim:foldlevel=1
