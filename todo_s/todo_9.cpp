#include<iostream>
using std::cin;
using std::cout;
#include<string>
using std::string;

size_t countChars(const string& s, char c)
{
  int counter = 0;
  for(size_t i = 0; i < s.length();i++)
  {
    if(s[i] == c)
    {
      counter++;
    }
  }
  return counter;
}


int main()
{
  char c;
  cin >> c;
  const string teststring = "hello world";

  cout << countChars(teststring, c) << "\n";



  return 0;
}