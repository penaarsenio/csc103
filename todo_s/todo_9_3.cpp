#include<iostream>
using std::cin;
using std::cout;
#include<string>
using std::string;


/*

bool ispalindrome(const string& s)
{
  for(size_t i = 0;i<s.length()/2;i++)
  {
    if(s[i] != s[s.length()-1-i])
    {
      return false;
    }
  }
  return true;
}

*/

bool ispalindrome(const string&s)
{
  bool test = false;
  string r;

  for(int i = s.length()-1; i >= 0;i--)
  {

    r += s[i];
  }
  if(r == s)
  {
    test = true;
  }
  else
    test = false;

  return test;
}

int main()
{

  string s;
  cin >> s;

  if(ispalindrome(s))
  {
    cout << s << " is a palinedrome\n";
  }
  else
    cout << s << " is not a palindrome\n";


  return 0;
}