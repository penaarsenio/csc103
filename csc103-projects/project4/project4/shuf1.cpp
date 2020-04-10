#include <cstdio>   // printf
#include <cstdlib>  // rand
#include <time.h>   // time
#include <getopt.h> // to parse long arguments.
#include <stdlib.h>
#include <string>
using std::string;
#include <vector>
using std::vector;
#include <iostream>
using std::cin;
using std::cout;
#include <algorithm>
using std::swap;
using std::min;
using std::random_shuffle;

static const char* usage =
"Usage: %s [OPTIONS]...\n"
"Limited clone of shuf.  Supported options:\n\n"
"   -e,--echo              treat each argument as an input line.\n"
"   -i,--input-range=LO-HI treat each number in [LO..HI] as an input line.\n"
"   -n,--head-count=N      output at most N lines.\n"
"   --help                 show this message and exit.\n";

int main(int argc, char *argv[]) {
	// define long options
	static int echo=0, rlow=0, rhigh=0;
	static size_t count=-1;
	bool userange = false;
	static struct option long_opts[] = {
		{"echo",        no_argument,       0, 'e'},
		{"input-range", required_argument, 0, 'i'},
		{"head-count",  required_argument, 0, 'n'},
		{"help",        no_argument,       0, 'h'},
		{0,0,0,0}
	};
	// process options:
	char c;
	int opt_index = 0;
	while ((c = getopt_long(argc, argv, "ei:n:h", long_opts, &opt_index)) != -1) {
		switch (c) {
			case 'e':
				echo = 1;
				break;
			case 'i':
				if (sscanf(optarg,"%i-%i",&rlow,&rhigh) != 2) {
					fprintf(stderr, "Format for --input-range is N-M\n");
					rlow=0; rhigh=-1;
				} else {
					userange = true;
				}
				break;
			case 'n':
				count = atol(optarg);
				break;
			case 'h':
				printf(usage,argv[0]);
				return 0;
			case '?':
				printf(usage,argv[0]);
				return 1;
		}
	}
	/* NOTE: the system's shuf does not read stdin *and* use -i or -e.
	 * Even -i and -e are mutally exclusive... */

	/* TODO: write me... */

	vector<int> numb;
	srand(time(0));

	if(echo==1)
	{
		string s;
		vector<string> words;

		while(getline(cin,s))
		{
			words.push_back(s);
		}

		srand(time(0));

		for(size_t i = 0; i<words.size();i++)
		{
			int r = rand() % words.size();
			string temp = words[i];
			words[i] = words[r];
			words[r]=temp;
		}

		for(size_t i = 0; i<words.size();i++)
		{
			cout << words[i] << "\n";
		}
		return 0;
	}

		for(int i = rlow;i<=rhigh;i++)
		{
			numb.push_back(i);
		}

		for(size_t i = 0; i<numb.size();i++)
		{
			int r = rand() % numb.size();
			int temp = numb[i];
			numb[i] = numb[r];
			numb[r]=temp;
		}
	if(count>numb.size())
	{

		for(size_t i = 0;i<numb.size();i++)
		{
			cout << numb[i] << " ";
		}
		cout << "\n";

	}
	else if (count > 0 && count < numb.size())
	{
		for(size_t i = 0;i<count;i++)
		{
			cout << numb[i] << " ";
		}
		cout << "\n";
	}

	return 0;
}
