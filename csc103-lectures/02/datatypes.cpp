#include <iostream>
using std::cout;

int main()
{
	int x; /* make storage for an integer. */
	x = 65; /* write 65 to x */
	cout << x << "\n";
	/* we can temporarily relabel memory as having
	 * values of some other datatype, like this: */
	cout << (char)x << "\n";
	char c = 'Z';
	cout << c << "\n";
	cout << (int)c << "\n"; /* prints ASCII value */
	return 0; /* this communicates a value back to the shell (the program
				 running in your terminal which runs other programs for you).
				 0 will be interpreted as "success", and all other values
				 are interpreted as some sort of failure.  So, if you return
				 0 as done here, running './a.out && echo ":D"' will execute
				 the echo and you will see ':D' at the end of the output.
				 If you return anything else (e.g. 1) only the first command
				 will happen.  A more useful example: compile and run your
				 program only if compilation succeeded:
				 $ g++ datatypes.cpp && ./a.out
				 */
}

/* TODO:
 * 1. Do the reading: in particular Prof. Li's notes
 *    and the l1.pdf lecture I wrote.
 * 2. again, make sure you can compile this on the command line.
 * 3. experiment with the above.  make a change that doesn't compile
 *    and try to make sense out of the resulting error messages.
 * 4  make sure you have streamlined the process of editing,
 *    compiling, and testing your program.
 * 5. play with git.  see the tutorial.  be sure to get
 *    familiar with 'git diff' and 'git log -p'.
 * */

/* TODO: write a small program that reads 3 integers (from stdin, using
 * cin), and prints the *average* of the 3 to stdout (using cout).
 * NOTE: we didn't get to it in lecture, but most arithmetic operators
 * will do what you expect (e.g., z = x+y stores the value of x+y in z).
 * TODO: do the same for 5 integers, but ONLY USE TWO VARIABLES! */
