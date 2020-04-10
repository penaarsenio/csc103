#include<iostream>
using std::cin;
using std::cout;
#include<set>
using std::set;
#include<string>
using std::string;
#include<map>
using std::map;
#include<climits>
#include<vector>
using std::vector;

int main()
{
  string s;

  set<string>words;
  set<string>uniq;
  int linenumber=0;
  int numbwords=0;
  int maxlinelength=0;
  int finalbytecount=0;
  int finallongestline;
  vector<string>finalwords;



  while(getline(cin,s))
  {
    linenumber++;
    set<string>whilewords;
    vector<string> vwords;
    string tempstring;
    int v=0;
    int bytecount=0;
    int max = maxlinelength;

    for(size_t i = 0; i < s.length();i++)
    {
      if(s[i]==' ')
      {
        for(size_t j = v; j< i;j++)
        {
          tempstring+=s[j];
          bytecount++;
        }
        bytecount++;
        v=i+1;
        whilewords.insert(tempstring);
        numbwords++;
        vwords.push_back(tempstring);
        tempstring = "";
      }
      if(i==s.length()-1)
      {
        for(size_t k = v;k<s.length();k++)
        {
          tempstring+=s[k];
          bytecount++;
        }
          whilewords.insert(tempstring);
          vwords.push_back(tempstring);
          numbwords++;
          bytecount++;
      }
    }

    if(bytecount>max)
    {
      maxlinelength = bytecount;
      max = maxlinelength;
    }
    finallongestline = maxlinelength;

    for(set<string>::iterator final = whilewords.begin();final != whilewords.end();final++)
    {
      words.insert(*final);
    }
    for(size_t i = 0; i<vwords.size();i++)
    {
      finalwords.push_back(vwords[i]);
    }
    finalbytecount+=bytecount;
  }

  int uniqcounter=0;
  set<string>uniqset;

  for(size_t i = 0; i<finalwords.size();i++)
  {
    for(size_t j=0;j<finalwords.size();j++)
    {
      if(finalwords[i] == finalwords[j])
      {
        uniqcounter++;
      }
    }
    if(uniqcounter < 2)
      {
        uniqset.insert(finalwords[i]);
      }
    uniqcounter = 0;
  }

  for(set<string>::iterator pos = uniqset.begin(); pos!= uniqset.end();pos++)
  {
    cout << *pos << " ";
  }


/*

    for(size_t i = 0;i<=finalwords.size();i++)
    {
      cout << finalwords[i];
    }
*/

  //cout << finallongestline << "\n";

//cout << finalbytecount;

/*

  for(set<string>::iterator i = words.begin();i!=words.end();i++)
  {
    cout << *i;
  }

*/
  //cout << " " << linenumber << " " << numbwords << "\n";



  return 0;
}