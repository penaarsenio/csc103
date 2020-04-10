#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cstdio>

/* TODO: write the *extended* GCD algorithm, which returns gcd(a,b), but
 * also sets x and y such that ax + by = gcd(a,b).  We did this in lecture,
 * but try to do it here from scratch (don't look at the notes unless you
 * have to). */
int xgcd(int a, int b, int& x, int& y)
{
	return 1;
}

void xgcdTest()
{
	int a,b,x,y,d;
	while (cin >> a >> b) {
		d = xgcd(a,b,x,y);
		printf("xgcd(%i,%i) = %i = %i*%i + %i*%i\n",a,b,d,a,x,b,y);
	}
}

int main()
{
	xgcdTest();
	return 0;
}
