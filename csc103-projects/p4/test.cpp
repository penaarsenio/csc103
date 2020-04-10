#include<iostream>
using std::cin;
using std::cout;
#include<vector>
using std::vector;
#include<string>
using std::string;
using namespace std;

int main()
{
  vector<string> words;
  vector<string> output;
  string s;

  while(cin>>s)
  {
    words.push_back(s);
  }

  output=words;

  for(int i = 0; i < words.size(); i++)
  {
    string tempstring = words[i];
    cout << tempstring << endl;
    for(int j = 0; j <= tempstring.length();j++)
    {
      char c= tempstring[j];
      if(int(c)>=97 && int(c) <=122)
      {
        tempstring[j]=(char)(int(c-32));
      }
      else if(int(c)>=65 && int(c) <=90)
      {
        tempstring[j]=(char)(int(c+32));
      }
      output[i]=tempstring;
    }
  }

  for(size_t k = 0; k<output.size();k++)
  {
    cout << output[k] << " ";
  }
  cout << "\n";


  return 0;
}