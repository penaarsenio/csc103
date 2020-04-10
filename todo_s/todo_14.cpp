#include<iostream>
using std::cin;
using std::cout;
#include<set>
using std::set;
#include<vector>
using std::vector;

set<int> sort(vector<int>& v)
{
	set<int> sorted;

	for(int i = 0; i < 5;i++)
	{
		sorted.insert(v[i]);
	}

	return sorted;
}


int main()
{
	vector<int> V;
	set<int> s1;
	int n;
	int i=0;
	cout << "Enter the set that you want sorted: \n";

	while(cin>>n && n!=-1)
	{
		V.push_back(n);
	}

	s1 = sort(V);

	for(set<int>::iterator i = s1.begin();i != s1.end();i++)
	{
		cout << *i;
	}

	cout << "\n";

	return 0;
}



