#include<iostream>
using std::cin;
using std::cout;
#include<string>
using std::string;

string reverse(const string& s)
{
  string r;
  for(int i = s.length()-1;i >= 0;i--)
  {
    r +=s[i];
  }
  return r;
}

int main()
{
  string s;
  cin >> s;
  cout << reverse(s) << "\n";
  return 0;
}