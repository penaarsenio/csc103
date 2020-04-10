/* test program for rectangle */
#include <iostream>
using std::cin;
using std::cout;
#include "rectangle.h" /* get description of rectangle class */

int main()
{
	rectangle r;
	cout << "enter width and height: ";
	cin >> r.w >> r.h;
	cout << "area = " << r.area() << "\n";
	cout << "perimeter = " << r.perimeter() << "\n";
	return 0;
}

/* TODO: if you have the book, read chapter 5. */
/* TODO: try to make a similar class for another shape (say a circle),
 * and try * to refer back to this example as little as possible. */
