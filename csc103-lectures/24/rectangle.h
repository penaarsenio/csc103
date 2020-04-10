/* class declaration + member function prototypes
 * go in here. */
#pragma once /* prevent this from being #included multiple times */

class rectangle {
public: /* public stuff == what you need to *use* the class.  */
	double w;
	double h;
	double area();
	double perimeter();
};
