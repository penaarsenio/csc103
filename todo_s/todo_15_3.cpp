#include<iostream>
using std::cin;
using std::cout;
#include<set>
using std::set;
#include<string>
using std::string;

int main()
{

	set<string> s1;
	string s;
	while(cin>>s)
	{
		s1.insert(s);
	}

	for(set<string>::iterator i = s1.begin(); i != s1.end(); i++)
	{
		cout << *i << " ";
	}

	return 0;
}
