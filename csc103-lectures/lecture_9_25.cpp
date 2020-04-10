#include<vector>
using std::vector;
#include<iostream>
using std::cin;
using std::cout;

int main()
{

vector<int> V;
int x;
  while(cin>>x)
  {
  V.push_back(x);
  }
    for(size_t i = V.size()-1; i!= (size_t)(-1);i--)
    {
    cout << V[i] << "\n";
    }
return 0;
}