#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <vector>
using std::vector;
#include <algorithm>
using std::sort;
#include <string.h> // for c-string functions.
#include <getopt.h> // to parse long arguments.

static const char* usage =
"Usage: %s [OPTIONS] SET1 [SET2]\n"
"Limited clone of tr.  Supported options:\n\n"
"   -c,--complement     Use the complement of SET1.\n"
"   -d,--delete         Delete characters in SET1 rather than translate.\n"
"   --help          show this message and exit.\n";

void escape(string& s) {
	/* NOTE: the normal tr command seems to handle invalid escape
	 * sequences by simply removing the backslash (silently) and
	 * continuing with the translation as if it never appeared. */
	/* TODO: write me... */
}

int main(int argc, char *argv[])
{
	// define long options
	static int comp=0, del=0;
	static struct option long_opts[] = {
		{"complement",      no_argument,   0, 'c'},
		{"delete",          no_argument,   0, 'd'},
		{"help",            no_argument,   0, 'h'},
		{0,0,0,0}
	};
	// process options:
	char c;
	int opt_index = 0;
	while ((c = getopt_long(argc, argv, "cdh", long_opts, &opt_index)) != -1) {
		switch (c) {
			case 'c':
				comp = 1;
				break;
			case 'd':
				del = 1;
				break;
			case 'h':
				printf(usage,argv[0]);
				return 0;
			case '?':
				printf(usage,argv[0]);
				return 1;
		}
	}
	if (del) {
		if (optind != argc-1) {
			fprintf(stderr, "wrong number of arguments.\n");
			return 1;
		}
	} else if (optind != argc-2) {
		fprintf(stderr,
				"Exactly two strings must be given when translating.\n");
		return 1;
	}
	string s1 = argv[optind++];
	string s2 = (optind < argc)?argv[optind]:"";
	/* process any escape characters: */
	escape(s1);
	escape(s2);

	/* TODO: finish this... */

string st1 = argv[2];
string st2 = argv[optind];


vector <string> input;
vector <string> dele = input;

string s;
while (cin>>s){
  input.push_back(s);
}

//table of chars
vector <int> T(256);
for(size_t i = 0; i < T.size() ; i++)
  {
  T[i] = i;
  }



// TR
for(size_t i = 0; i < T.size() ; i++)
  {
  for(size_t j = 0; j < st1.length(); j++){
  if(T[i] == (int)st1[j])
    {
  T[i] = (int)st2[j]; //swaping variables on the table
    }
}
}
for(size_t i = 0; i < input.size(); i++){
  string temp = input[i];
  for(size_t j = 0; j < temp.length(); j++)
  {

    for(size_t k = 0; k< T.size(); k++)
    {
      if(k == (int)temp[j])
        {
          temp[j] = T[k];
        }
    }
  }
  input[i] = temp;
  cout << input[i] << " ";
}
/*
if(del==1)
{

for(size_t i = 0;i<input.size();i++)
{
  string temp2=input[i];
  string temp3="";
  for(size_t j=0;j<temp2.length();j++)
  {
    for(size_t k= 0;k<st1.length();k++)
    {
      if(temp2[j]!=st1[k])
      {
        temp3+=temp2[j];
      }
    }
    input[i]=temp3;
  }
}

for(size_t i=0;i<input.size();i++)
{
  cout << input[i] << " ";
}

}
*/
return 0;
}
