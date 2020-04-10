#include "vector.h"

/* TODO: see if you can fill out some of the other member functions,
 * as well as fixing push_back below so that it works if the capacity
 * is already reached. */

/* NOTE: to test this stuff, you will have to write another main program
 * that declares a vector and calls some of these functions.  You will
 * also need to either (a) make the data array temporarily public, or
 * (b) implment the operator[] so you can at least read the elements... */

void vector::pop_back()
{
	/* assuming vector not empty */
	--size;
}

void vector::push_back(int x)
{
	/* assuming capacity is large enough: */
	data[size++] = x;
}
