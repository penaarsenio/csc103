/*
 * CSc103 Project 3: unix utilities
 * See readme.html for details.
 * Please list all references you made use of in order to complete the
 * assignment: your classmates, websites, etc.  Aside from the lecture notes
 * and the book, please list everything.  And remember- citing a source does
 * NOT mean it is okay to COPY THAT SOURCE.  What you submit here **MUST BE
 * YOUR OWN WORK**.
 * References:
 *
 *
 * Finally, please indicate approximately how many hours you spent on this:
 * #hours:
 */

#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <set>
using std::set;
#include <getopt.h> // to parse long arguments.
#include <cstdio> // printf
#include<vector>
using std::vector;

static const char* usage =
"Usage: %s [OPTIONS]...\n"
"Limited clone of wc.  Supported options:\n\n"
"   -c,--bytes            print byte count.\n"
"   -l,--lines            print line count.\n"
"   -w,--words            print word count.\n"
"   -L,--max-line-length  print length of longest line.\n"
"   -u,--uwords           print unique word count.\n"
"   --help          show this message and exit.\n";

int main(int argc, char *argv[])
{
	// define long options
	static int charonly=0, linesonly=0, wordsonly=0, uwordsonly=0, longonly=0;
	static struct option long_opts[] = {
		{"bytes",           no_argument,   0, 'c'},
		{"lines",           no_argument,   0, 'l'},
		{"words",           no_argument,   0, 'w'},
		{"uwords",          no_argument,   0, 'u'},
		{"max-line-length", no_argument,   0, 'L'},
		{"help",            no_argument,   0, 'h'},
		{0,0,0,0}
	};
	// process options:
	char c;
	int opt_index = 0;
	while ((c = getopt_long(argc, argv, "clwuLh", long_opts, &opt_index)) != -1) {
		switch (c) {
			case 'c':
				charonly = 1;
				break;
			case 'l':
				linesonly = 1;
				break;
			case 'w':
				wordsonly = 1;
				break;
			case 'u':
				uwordsonly = 1;
				break;
			case 'L':
				longonly = 1;
				break;
			case 'h':
				printf(usage,argv[0]);
				return 0;
			case '?':
				printf(usage,argv[0]);
				return 1;
		}
	}

	/* TODO: write me... */

	string s;
  set<string>words;
  set<string>uniq;
  int linenumber=0;
  int numbwords=0;
  int maxlinelength=0;
  int finalbytecount=0;
  int finallongestline;
  vector<string>finalwords;
	int uniqcounter = 0;


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

		uniq=whilewords;

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

	// Output specific variables

	if(charonly != 1 && linesonly != 1 && wordsonly != 1 && uwordsonly != 1 && longonly != 1)
	{
		cout << linenumber << " " << numbwords << " " << finalbytecount;
	}
	if(linesonly==1)
	{
		cout << linenumber << " ";
	}
	if(wordsonly==1)
	{
		cout << numbwords << " ";
	}
	if(charonly==1)
	{
		cout << finalbytecount << " ";
	}
	if(longonly==1)
	{
		cout << finallongestline << " ";
	}
	if(uwordsonly==1)
	{
		for(set<string>::iterator pos = uniq.begin(); pos!= uniq.end();pos++)
		{
			uniqcounter++;
		}
		cout << uniqcounter;
	}

	return 0;
}
