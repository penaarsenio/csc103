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
  size_t low = 0;
  size_t high = V.size()-1;

  for(size_t i = 0;i<V.size();i++)
  {
    size_t mid = (low + high) / 2;

    if(V[mid] == number)
    {
      return true;
    }
    if(V[mid] < number)
    {
      low = mid + 1;
    }
    else
      high = mid - 1;
  }






  return false;
}