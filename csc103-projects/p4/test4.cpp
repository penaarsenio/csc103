#include<iostream>
using std::cin;
using std::cout;
#include<vector>
using std::vector;
#include<string>
using std::string;

int main()
{

  vector<string> v;
  string s;
  char c = 'o';

  while(cin>>s)
  {
    v.push_back(s);
  }

  for(size_t i = 0;i<v.size();i++)
  {
    string temp = v[i];
    string s2 = "";
    for(size_t j=0;j<temp.length();j++)
    {
      if(temp[j]!=c)
      {
        s2+=temp[j];
      }
      v[i]=s2;
    }
  }

  for(size_t i = 0;i<v.size();i++)
  {
    cout << v[i] << " ";
  }
  cout << "\n";
  return 0;
}
