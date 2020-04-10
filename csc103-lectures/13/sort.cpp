#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
#include <algorithm>
using std::swap;

size_t indexOfSmallest(const vector<int>& A, size_t start)
{
	size_t minIndexSoFar = start; /* index of smallest element in
	                                 range A[start..i] */
	for (size_t i = start+1; i < A.size(); i++) {
		if (A[minIndexSoFar] > A[i])
			minIndexSoFar = i;
	}
	return minIndexSoFar;
}

void sort(vector<int>& A)
{
	for (size_t blueLine = 0; blueLine < A.size()-1; blueLine++) {
		/* find index of smallest thing starting at blue line, then
		 * swap with value at blue line. */
		size_t iSmallest = indexOfSmallest(A,blueLine);
		swap(A[iSmallest],A[blueLine]);
	}
}

int main()
{
	int n;
	vector<int> A;
	while (cin >> n) {
		A.push_back(n);
	}
	sort(A);
	for (size_t i = 0; i < A.size(); i++) {
		cout << A[i] << " ";
	}
	cout << "\n";
	return 0;
}
