/* Exercise: write a *binary search* on a sorted vector.  The idea is to
 * kind of emulate the process you use to find a particular page in a book:
 * 1. open the book to some page in the middle.
 * 2. if the page number was too high, open to the middle of the pages to the
 *    left; if it was too low, open to the middle of the pages to the right
 * 3. continue as above until you found the right page.
 *
 * This might be a little challenging.  Ask questions if you get stuck.
 * */

#include <vector>
using std::vector;
#include <iostream>
using std::cout;
using std::cin;

bool binary_search(vector<int> V, int x); /* "prototype" */

int main(void)
{
	/* simple test: read vector (hopefully sorted) from stdin,
	 * search for 23, report outcome. */
	vector<int> V;
	int n;
	while (cin >> n) {
		V.push_back(n);
	}
	/* hope the elements are in order... */
	if (binary_search(V,23))
		cout << "23 was found.\n";
	else cout << "23 was not found.\n";
	return 0;
}

/* TODO: without reading any of the code below, try to write this
 * program on your own. */
/* TODO: as you are reinventing this program, try to think through
 * the invariants for your variables. */

/* assumption: V is in ascending order! */
bool binary_search(vector<int> V, int x)
{
	/* IDEA let's store lower and upper bounds for where
	 * x might be located, and shrink them as we examine
	 * elements. */
	int low  = 0; /* lower bound for location of x */
	int high = V.size()-1; /* upper bound for location of x */
	/* more precisely, we will make sure that x, if present,
	 * is in the range V[low..high]; */
	while (low <= high) { /* i.e., while there are still elements
	                         left to search... */
		/* check midpoint for x; adjust bounds according to
		 * what we find. */
		int mid = (low + high) / 2;
		if (x == V[mid]) return true;
		/* update the range: */
		if (V[mid] < x)
			low = mid+1;
		else
			high = mid-1;
	}
	/* NOTE: if low and high were of size_t (which is unsigned), the above
	 * code could produce incorrect results (and likely crash!).
	 * TODO: change the types to size_t, and find inputs which would crash
	 * the program.
	 * TODO: make a new version of binary_search which uses size_t for low
	 * and high, but produces correct results in the above situation.
	 * NOTE: there is also a possibility of incorrect results on very large
	 * arrays.
	 * */
	return false;
}

/* NOTE: when we pass a vector by value (as done above), a copy of the entire
 * thing must be made for each call.  This actually undermines all the
 * efficiency gains we made!  Oh no!!  TODO: fix it by changing it to a
 * *constant* reference.  Parameter should look like this:
 * const vector<int>& V
 * This is the standard way to "fake" a by value function call.  Make sure you
 * understand how it is "faking" by value behavior.
 * */
