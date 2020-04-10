#include<iostream>
using std::cout;
using std::cin;
#include<map>
using std::map;
#include<string>
using std::string;

int main()
{
  map<string,int> M;
  string s;
  while(cin>>s) M[s]++;
  for(map<string,int>::iterator i = M.begin(); i != M.end();i++)
  {
    cout << (*i).first << "\t: " << (*i).second << "\n";
  }
  return 0;
}
