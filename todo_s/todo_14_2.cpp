#include<iostream>
using std::cin;
using std::cout;
#include<set>
using std::set;
#include<vector>
using std::vector;

set<int> sort(int a[])
{
	set<int> sorted;

	for(int i = 0; i < 5;i++)
	{
		sorted.insert(a[i]);
	}

	return sorted;
}


int main()
{
	int A[5] = {};
	set<int> s1;
	int n;
	int i=0;
	cout << "Enter the set that you want sorted: \n";

	while(cin >> n)
	{
		A[i]=n;
		i++;
		if(i==5)
		{
			break;
		}
	}

	s1 = sort(A);

	for(set<int>::iterator i = s1.begin();i != s1.end();i++)
	{
		cout << *i;
	}

	cout << "\n";

	return 0;
}



