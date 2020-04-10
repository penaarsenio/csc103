#include<iostream>
using std::cin;
using std::cout;
#include<vector>
using std::vector;

bool search(vector<int> v,int number);

int main()
{

  vector<int> V;

  int n;
  while(cin>>n)
  {
    V.push_back(n);
  }

  cout << search(V,23) << "\n";


  return 0;
}

bool search(vector<int> V, int number)
{

  bool test;

  for(size_t i = 0; i<V.size();i++)
  {
    if(V[i]==number)
    {
      test = true;
    }
    else
      test = false;
  }


  return test;
}