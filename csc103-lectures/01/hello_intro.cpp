#include <iostream>
/* "iostream" is just a file, and #include just copies and pastes it
 * into our program.  iostream contains some facilities to make input
 * and output easy for us.  E.g. "std::cout". */

/* main is where your program begins. */
int main()
{
	/* TODO: why do you need the quotes?  Find out what happens if you
	 * take them out.  And what is the '\n' for?  Do some experimenting
	 * to find out.  */
	std::cout << "hello class.\n";
	return 0;
}

/* TODO: follow the tutorial on "building on the command line" from our
 * homepage.  Then just spend some time experimenting and see what you
 * can learn.  */

/* NOTE: if you want to take a look at what's really involved in running
 * this program (the tiny instructions I mentioned).  Try this:
 * g++ -g hello.cpp
 * $ gdb a.out
 * (gdb) break main
 * (gdb) tui enable
 * (gdb) layout asm
 * (gdb) run
 * (gdb) si
 * <keep hitting enter until you're bored... then finish running
 * the program like this:>
 * (gdb) continue
 * */

/* NOTE: a few takeaways from our first lecture:
 * 1. There is a huge gap in abstraction levels that must be bridged.
 * 2. The compiler is your friend, but you still need to give it a
 *    seemingly unnatural amount of detail...
 * */
