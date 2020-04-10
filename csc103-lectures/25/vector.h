/* header for vector class. */
#pragma once /* makes sure this file is #included only ONCE. */
#include <stddef.h> /* for size_t */

class vector {
public:
	void pop_back();
	void push_back(int x);
	void clear();
	int& operator[](size_t i); /* for element access, like V[i] = 99; */

	/* important stuff: *every* class that uses dynamic
	 * memory should implement the following: */
	/* (1) constructor and copy constructor. */
	vector2(size_t initCapacity = 16);
	vector2(const vector2& V); /* this is the copy constructor.
	    it will be called automatically when you pass vectors
		by value, as well as returning vectors by value, and
		possibly in other situations with intermediate rvalues. */
	/* NOTE: constructors (in general) put a newly created variable
	 * in a consistent state. */
	/* (2) Destructor. This is to free any dynamically allocated
	 * memory when the object goes out of scope or is destroyed. */
	~vector2();
	/* (3) assignment operator */
	vector2& operator=(vector2 V);
	/* NOTE: return type is vector2 so we can do stuff like a = b = c; */
private:
	/* "under the hood" stuff.  can only be accessed by other member
	 * functions.  Prevents users of our vector class from putting the
	 * variables in an inconsistent state. */
	size_t size; /* number of elements in vector */
	size_t capacity; /* size of data array */
	int* data; /* dynamically allocated storage for elements */
	/* NOTE: capacity and data are *linked* in that capacity should always
	 * contain the number of elements that've been allocated for the data
	 * array.  They have to be kept in sync.  Hence we make these variables
	 * private.  (In general, this is a good idea whenever changing variables
	 * *independently* could result in an inconsistent state.)  */
};
