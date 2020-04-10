#include<iostream>
using std::cin;
using std::cout;
#include<string>
using std::string;
#include<vector>
using std::vector;

size_t countwords(string& s,vector<string>& l)
{
  bool justreadspace = true;
  size_t count = 0;
  for(size_t i = 0;i < s.length();i++)
  {
    char c = s[i];
    size_t wordsize = 0;
    string currentword[wordsize] = {};
    if(justreadspace)
    {
      if(c != ' ')
      {
        string currentword[wordsize] = {};
        wordsize++;
        count++;
        justreadspace = false;
      }
    }
    else
      {
      if(c != ' ')
      {
        wordsize++;
        justreadspace = false;
      }
      else if(c = ' '){
        currentword[wordsize];
        for(size_t i = 0;i<wordsize;i++)
        {
          currentword[i] = s[i];
        }
        l.push_back(currentword);
        justreadspace = true;
      }
    }
  }
  for(size_t i = 0;i<l.size()-1;i++)
    {
      cout << l[i];
    }
  return 0;
}

int main()
{
  vector<string> l;
  string s;
  getline(cin,s);
  countwords(s,l);
  //cout << "There are " << countwords(s,l) << " words in " << s << "\n";
  return 0;
}