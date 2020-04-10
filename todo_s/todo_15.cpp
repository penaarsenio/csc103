#include<iostream>
using std::cin;
using std::cout;
#include<map>
using std::map;
#include<string>
using std::string;

int main()
{
	map<string,int> freq_table;
	string s;
	int n;

	while(cin>>s) freq_table[s]++;
	{
		for(map<string,int>::iterator i = freq_table.begin();i != freq_table.end();i++)
		{
			cout << (*i).first << " " << "occurred " << (*i).second << "\n";
		}
	}
	return 0;
}
