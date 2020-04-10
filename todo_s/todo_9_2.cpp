#include<iostream>
using std::cin;
using std::cout;
#include<string>
using std::string;

string yell(string&s)
{
  for(size_t i = 0;i < s.length();i++)
  {
    char c = s[i];
    s[i]=(char)(int(c-32));
  }
  return s;
}

int main()
{
  string word;
  cin >> word;
  cout << yell(word) << "\n";
  return 0;
}