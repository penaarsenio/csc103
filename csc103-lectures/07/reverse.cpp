#include <vector>
using std::vector;
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* read a bunch of integers from stdin and print them
	 * in reverse order. */

	vector<int> V;
	int x;
	while (cin >> x) {
		V.push_back(x);
	}
	/* now print in reverse order: */
	for (size_t i = V.size()-1; i != (size_t)(-1); i--) {
		cout << V[i] << "\n";
	}
	/* NOTE: V.size() is of type size_t, which cannot store negative
	 * numbers.  Hence if we were to use a size_t for the loop index variable
	 * i, we could not use the intuitive criterion i >= 0 for ending the loop,
	 * as this will always evaluate to true.  This is why we have the !=-1
	 * instead.  As another alternative, you could count upwards, and change
	 * the indexes to refer to the other end.  TODO: try it out -- make a for
	 * loop going from (i=0; i<V.size(); i++) which prints in reverse.
	 * (Not hard, but good practice.)
	 * */
	cout << "number of bytes for int: " << sizeof(int) << "\n";
	return 0;
}

/* TODO: write a function that takes a vector and searches for
 * a particular value x, returning true if and only if x is found.
 * NOTE: you should think carefully about how to pass the parameters,
 * especially for the vector.  (By value, reference, const reference?) */
/* TODO: write a *binary search* on a sorted vector.  The idea is to
 * kind of emulate the process you use to find a particular page in a book:
 * 1. open the book to some page in the middle.
 * 2. if the page number was too high, open to the middle of the pages to the
 *    left; if it was too low, open to the middle of the pages to the right
 * 3. continue as above until you found the right page.
 *
 * This might be a little challenging.  Ask questions if you get stuck.
 * */
/* TODO: write a function that takes a vector and places the elements
 * in sorted order.  Warning: this could be kind of challenging. */
