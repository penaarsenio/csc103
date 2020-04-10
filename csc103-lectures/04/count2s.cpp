#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* example from class: compute exponent of largest power of 2 dividing
	 * a given integer: */
	int n;
	cin >> n;
	int count = 0;
	while (n % 2 == 0) {
		n /= 2;
		count++;
	}
	cout << count << "\n";
	return 0;
}
