#include <iostream>
using std::cout;
using std::cin;
#include <map>
using std::map;
#include <string>
using std::string;

int main()
{
	map<string,int> M;
	string s;
	while (cin >> s) M[s]++;
	/* now just print M.  Have to use iterators... */
	for (map<string,int>::iterator i = M.begin(); i != M.end(); i++) {
		cout << (*i).first /* index */ << "\t: " <<
			    (*i).second /* value */ << "\n";
	}
	/* NOTE: *i is of datatype pair<string,int> */
	return 0;
}
