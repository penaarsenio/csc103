/*
 * CSc103 Project 3: Game of Life
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
 * #hours: I want to say over 40hrs X_X
 */

#include <cstdio>
#include <stdlib.h> // for exit();
#include <getopt.h> // to parse long arguments.
#include <unistd.h> // sleep
#include <vector>
using std::vector;
#include <string>
using std::string;
vector<vector<bool> > world ;
#include<iostream>
using std::cin;
using std::cout;
static const char* usage =
"Usage: %s [OPTIONS]...\n"
"Text-based version of Conway's game of life.\n\n"
"   --seed,-s     FILE     read start state from FILE.\n"
"   --world,-w    FILE     store current world in FILE.\n"
"   --fast-fw,-f  NUM      evolve system for NUM generations and quit.\n"
"   --help,-h              show this message and exit.\n";

size_t max_gen = 0; /* if > 0, fast forward to this generation. */
string wfilename =  "/tmp/gol-world-current"; /* write state here */
FILE* fworld = 0; /* handle to file wfilename. */
string initfilename = "/tmp/gol-world-current"; /* read initial state from here. */

/* see the hints section of the readme: to get the basics working,
 * uncomment this next line, and you'll have a suitable test vector
 * to which you can apply the rules. */
// #define WARMUP 1

#ifdef WARMUP
vector<vector<bool> > world = {
#include "res/bglider-small"
};
#endif

/* NOTE: you don't have to write these functions -- this is just how
 * I chose to organize my code. */
size_t nbrCount(size_t i, size_t j, const vector<vector<bool> >& g);
void update();
int initFromFile(const string& fname); /* read initial state into vectors. */
void mainLoop();
void dumpState(FILE* f);

/* NOTE: you can use a *boolean* as an index into the following array
 * to translate from bool to the right characters: */
char text[3] = ".O";
// usage: cout << text[world[i][j]];

int main(int argc, char *argv[]) {
	// define long options
	static struct option long_opts[] = {
		{"seed",    required_argument, 0, 's'},
		{"world",   required_argument, 0, 'w'},
		{"fast-fw", required_argument, 0, 'f'},
		{"help",    no_argument,       0, 'h'},
		{0,0,0,0}
	};
	// process options:
	char c;
	int opt_index = 0;
	while ((c = getopt_long(argc, argv, "hs:w:f:", long_opts, &opt_index)) != -1) {
		switch (c) {
			case 'h':
				printf(usage,argv[0]);
				return 0;
			case 's':
				initfilename = optarg;
				break;
			case 'w':
				wfilename = optarg;
				break;
			case 'f':
				max_gen = atoi(optarg);
				break;
			case '?':
				printf(usage,argv[0]);
				return 1;
		}
	}

	/* NOTE: at this point wfilename initfilename and max_gen
	 * are all set according to the command line. */
	/* If you wrote the initFromFile function, call it here: */
	initFromFile(initfilename);
	mainLoop();
	return 0;
}

void mainLoop() {
	/* TODO: write this */
	/* update, write, sleep */
	//everything here

	int neighbor_counter=0;
	bool position = false;
  vector<vector<bool> > newworld;
  newworld = world;

while(max_gen > 0)
{


	for(size_t i=0;i<world.size();i++)
	{

	for(size_t j=0; j<world[i].size();j++)
	{

    //Declare the state of the position of the cell

    if(world[i][j]==0)
    {
      position=false;
    }
    else if (world[i][j]==1)
    {
      position=true;
    }

		//reset the neighbor counter

		neighbor_counter=0;

			//Rules for amount of neighbors around a specific cell

			if(world[(i-1+world.size())%world.size()][(j-1+world[i].size())%world[i].size()]==true)
			{
				neighbor_counter++;
			}
			if(world[(i-1+world.size())%world.size()][(j+world[i].size())%world[i].size()]==true)
			{
				neighbor_counter++;
			}
			if(world[(i-1+world.size())%world.size()][(j+1+world[i].size())%world[i].size()]==true)
			{
				neighbor_counter++;
			}
			if(world[(i+world.size())%world.size()][(j-1+world[i].size())%world[i].size()]==true)
			{
				neighbor_counter++;
			}
			if(world[(i+world.size())%world.size()][(j+1+world[i].size())%world[i].size()]==true)
			{
				neighbor_counter++;
			}
			if(world[(i+1+world.size())%world.size()][(j-1+world[i].size())%world[i].size()]==true)
			{
				neighbor_counter++;
			}
			if(world[(i+1+world.size())%world.size()][(j+world[i].size())%world[i].size()]==true)
			{
				neighbor_counter++;
			}
			if(world[(i+1+world.size())%world.size()][(j+1+world[i].size())%world[i].size()]==true)
			{
				neighbor_counter++;
			}


            //Rules neighbor counter
				//underpopulation
				if(position==true && neighbor_counter < 2)
				{
					position = false;
					newworld[i][j] = false;
				}
				//overpopulation
				else if(position == true && neighbor_counter > 3)
				{
					position = false;
					newworld[i][j]=false;
				}
				//reproduction
				else if(position == false && neighbor_counter == 3)
				{
					position = true;
					newworld[i][j]=true;
				}
	}
	}
	max_gen--;
	world = newworld;
}

for(size_t i = 0;i<newworld.size();i++)
{
	for(size_t j= 0;j<newworld[i].size();j++)
	{
			cout << text[newworld[i][j]];
	}
	cout << "\n";
}


	if (max_gen == 0) {
		/* make one generation update per second */
	} else {
		/* go through generations as fast as you can until
		 * max_gen is reached... */
	}

}


int initFromFile(const string& fname)
{
	char c;
	//vector<vector<bool> > world;
	FILE* f = fopen(fname.c_str(),"rb"); /* note conversion to char* */
	// TODO: make sure f != 0
	world.push_back(vector<bool>()); /* add a new row */
	size_t rows = 0; /* current row we are filling */
	while (fread(&c,1,1,f)) {
				if (c == '\n') {
					/* found newline; add a new row */
					rows++;
					world.push_back(vector<bool>());
			} else if (c == '.') {
					world[rows].push_back(false); /* dead x_x */
			} else {
					world[rows].push_back(true); /* alive 8D */
			}
	}
world.pop_back();
fclose(f);
	// TODO: check if last row has length 0; if so, call pop_back
	return 0;
/* NOTE: might have some issues with an empty last row.
 * But the fix is pretty easy (just remove it!). */
}

// Tried to get this function working but still have questions on it

//int wfilename(const string& fname)
//{
	/* Open the file (for writing), storing the handle in f: */
	//FILE* f = fopen("/path/to/myfile","wb");
	/* Write a single character to the file: */
	//char c = '.';
	//fwrite(&c,1,1,f); // write a byte to f
	/* close f when done: */
	//fclose(f);

	//return 0;
//}
