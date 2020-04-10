#include <set>
using std::set;
#include <iostream>
using std::cin;
using std::cout;

set<set<int>> powerset(const set<int>& S)
{
	if (S.size() == 0) {
		// return set<set<int>>(set<int>(),1);
		set<set<int>> P; /* for the return value */
		set<int> E; /* will be empty! */
		P.insert(E); /* now P = {{}} */
		return P;
	}
	/* now we assume powerset works on any input of smaller
	 * size than S (of fewer elements). */
	set<int> Sp(S); /* make S' a copy of S */
	int x = *Sp.begin();
	/* remove x from S': */
	Sp.erase(x); /* now S' = S\{x} */
	set<set<int>> T = powerset(Sp);
	set<set<int>> P(T); /* copy all of T into P */
	/* what is P missing?  All subsets with an x.  Add those: */
	for (set<set<int>>::iterator i = T.begin(); i!=T.end(); i++) {
		set<int> u(*i);
		u.insert(x);
		P.insert(u);
	}
	return P;
}

int main()
{
	set<int> S = {0,1,2};
	set<set<int>> P = powerset(S);
	/* now print result: */
	cout << "{\n";
	for (set<set<int>>::iterator i = P.begin(); i!=P.end(); i++) {
		cout << "  { ";
		for (set<int>::iterator j = (*i).begin(); j!=(*i).end(); j++) {
			cout << *j << " ";
		}
		cout << "}\n";
	}
	cout << "}\n";
	return 0;
}
