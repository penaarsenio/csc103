#include <cstdio>
#include <getopt.h> // to parse long arguments.
#include <string>
using std::string;
#include <iostream>
using std::cin;
using std::cout;
#include <set>
using std::set;
using std::multiset;
#include <strings.h>
#include<vector>
using std::vector;
#include<algorithm>
using std::sort;

static const char* usage =
"Usage: %s [OPTIONS]...\n"
"Limited clone of sort.  Supported options:\n\n"
"   -r,--reverse        Sort descending.\n"
"   -f,--ignore-case    Ignore case.\n"
"   -u,--unique         Don't output duplicate lines.\n"
"   --help              Show this message and exit.\n";

struct igncaseComp {
	bool operator()(const string& s1, const string& s2) {
		return (strcasecmp(s1.c_str(),s2.c_str()) < 0);
	}
};
/* NOTE: set<string,igncaseComp> S; would declare a set S which
 * does its sorting in a case-insensitive way! */

int main(int argc, char *argv[]) {
	// define long options
	static int descending=0, ignorecase=0, unique=0;
	static struct option long_opts[] = {
		{"reverse",       no_argument,   0, 'r'},
		{"ignore-case",   no_argument,   0, 'f'},
		{"unique",        no_argument,   0, 'u'},
		{"help",          no_argument,   0, 'h'},
		{0,0,0,0}
	};
	// process options:
	char c;
	int opt_index = 0;
	while ((c = getopt_long(argc, argv, "rfuh", long_opts, &opt_index)) != -1) {
		switch (c) {
			case 'r':
				descending = 1;
				break;
			case 'f':
				ignorecase = 1;
				break;
			case 'u':
				unique = 1;
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

	string n;
	vector<string> words;

	while (cin >> n)
	{
		words.push_back(n);
	}

		// Output for variables

	if(descending==1)
	{

		for(size_t blueLine = 0; blueLine < words.size()-1; blueLine++)
		{
			size_t minIndexSoFar = blueLine;

			for(size_t i = blueLine+1; i < words.size(); i++)
			{
				if(words[minIndexSoFar] < words[i])
					minIndexSoFar = i;
			}

			size_t iSmallest = minIndexSoFar;
			swap(words[iSmallest],words[blueLine]);
		}

    for(int k=0;k<words.size();k++)
    {
			cout << words[k]<<"\n";
    }
		cout << "\n";

	}


	if(ignorecase==1)
	{
		vector<string>output_case;
		output_case=words;

		for(int i=0; i<output_case.size();i++)
		{
			string tempstring = output_case[i];

			for(int j=0;j<tempstring.length();j++)
			{
				char c = tempstring[j];

				if(int(c) >= 97 && int(c) <= 122)
				{
					tempstring[j]=(char)(int(c-32));
				}
				else if(int(c) >= 65 && int(c) <= 90)
				{
					tempstring[j]=(char)(int(c+32));
				}
			}

			output_case[i]=tempstring;
    }

		for(int k=0;k<output_case.size();k++)
    {
			cout << output_case[k]<<" ";
    }
			cout << "\n";
	}

	if(unique==1)
	{
		for(int k=0;k<words.size();k++)
    {
			int count=0;

			for(int j=0;j<words.size();j++)
			{
        if(words[k]==words[j])
        count++;
			}
        if (count ==1)
        cout<<words[k]<<" ";
		cout << "\n";
    }

	}

    return 0;
}


