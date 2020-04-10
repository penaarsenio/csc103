#include<iostream>
using std::cin;
using std::cout;
#include<vector>
using std::vector;

vector<int> remove_i(int i_element,vector<int>& v)
{
	vector<int> newset;

	for(int i = 0;i< v.size();i++)
	{
		if(v[i]==i_element)
		{
			i++;
		}
		newset.push_back(v[i]);
	}

	return newset;
}

int main()
{
	vector<int> v1;
	vector<int> v2;
	int n,ith_element;

	cout << "Enter the vector: \n";

	while(cin>>n)
	{
		v1.push_back(n);
		if(n==-1)
		{
			break;
		}
	}

	cout << "Enter the ith-element to be removed: \n";
	cin >> ith_element;

	v2 = remove_i(ith_element,v1);

	for(size_t i = 0;i<v2.size()-1;i++)
	{
		cout << v2[i];
	}
	cout << "\n";

	return 0;
}
