#include <cstdio>
#include <getopt.h> // to parse long arguments.
#include <string>
using std::string;
#include <iostream>
using std::cin;
using std::cout;
#include<map>
using std::map;
#include<set>
using std::set;
#include<vector>
using std::vector;

static const char* usage =
"Usage: %s [OPTIONS]...\n"
"Limited clone of uniq.  Supported options:\n\n"
"   -c,--count         prefix lines by their counts.\n"
"   -d,--repeated      only print duplicate lines.\n"
"   -u,--unique        only print lines that are unique.\n"
"   --help             show this message and exit.\n";

int main(int argc, char *argv[]) {
	// define long options
	static int showcount=0, dupsonly=0, uniqonly=0;
	static struct option long_opts[] = {
		{"count",         no_argument, 0, 'c'},
		{"repeated",      no_argument, 0, 'd'},
		{"unique",        no_argument, 0, 'u'},
		{"help",          no_argument, 0, 'h'},
		{0,0,0,0}
	};
	// process options:
	char c;
	int opt_index = 0;
	while ((c = getopt_long(argc, argv, "cduh", long_opts, &opt_index)) != -1) {
		switch (c) {
			case 'c':
				showcount = 1;
				break;
			case 'd':
				dupsonly = 1;
				break;
			case 'u':
				uniqonly = 1;
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
	vector<string>lines;
	set<string> uniq;
	set<string> duplicate;
	map<string,int>count;
	int counter=0;


	while(getline(cin,s))
	{
		count[s]++;
		lines.push_back(s);
	}

	for(size_t i = 0; i < lines.size();i++)
	{
		for(size_t j = 0; j < lines.size();j++)
		{
			if(lines[i]==lines[j])
			{
				counter++;
			}
		}
		if(counter < 2)
		{
			uniq.insert(lines[i]);
		}
		if(counter > 1)
		{
			duplicate.insert(lines[i]);
		}
		counter=0;
	}


	//Output for variables



	if(showcount==1)
	{
		for(map<string,int>::iterator i = count.begin();i!=count.end();i++)
		{
			cout << (*i).second << " " << (*i).first << "\n";
		}
	}
	if(dupsonly==1)
	{
		for(set<string>::iterator i = duplicate.begin(); i!=duplicate.end();i++)
		{
			cout << *i << " ";
		}
	}
	if(uniqonly==1)
	{
		for(set<string>::iterator i = uniq.begin();i!=uniq.end();i++)
		{
			cout << *i << " ";
		}
	}

	return 0;
}
