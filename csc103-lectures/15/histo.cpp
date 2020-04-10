#include <iostream>
using std::cout;
using std::cin;
#include <map>
using std::map;
#include <string>
using std::string;

int main()
{
	map<string,string> M;
	string s;
	while (cin >> s) M[s] += '#';
	/* now just print M.  Have to use iterators... */
	for (map<string,string>::iterator i = M.begin(); i != M.end(); i++) {
		cout << (*i).first << ": " << (*i).second << "\n";
	}
	/* NOTE: *i is of datatype pair<string,int> */
	return 0;
}
