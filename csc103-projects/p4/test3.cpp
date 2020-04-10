#include<iostream>
using std::cin;
using std::cout;
#include<set>
using std::set;
#include<string>
using std::string;

int main()
{

  string s;
  int counter=0;

  set<string>words={"hi","my","name","is"};

  for(set<string>::iterator i = words.begin();i!=words.end();i++)
    {
      cout << *i;
      counter++;
    }

  cout << counter;



  return 0;
}