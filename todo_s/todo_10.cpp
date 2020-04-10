#include<iostream>
using std::cin;
using std::cout;
#include<string>
using std::string;

size_t countwords(string& s)
{
  bool justreadspace = true;
  size_t count = 0;
  for(size_t i = 0;i < s.length();i++)
  {
    char c = s[i];
    if(justreadspace)
    {
      if(c != ' ')
      {
        count++;
        justreadspace = false;
      }
    }
    else
      {
      if(c != ' ')
      {
        justreadspace = false;
      }
      else if(c = ' '){
        justreadspace = true;
      }
    }
  }
  return count;
}

int main()
{
  string s;
  getline(cin,s);
  cout << "There are " << countwords(s) << " words in " << s << "\n";
  return 0;
}