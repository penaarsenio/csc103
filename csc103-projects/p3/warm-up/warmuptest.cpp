#include <vector>
using std::vector;
#include <iostream>
using std::cin;
using std::cout;
using std::ostream;

	vector<vector<bool> > world = {
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};

int main()
{

	/* NOTE: the vector 'world' above corresponds to the contents
	 * of ../res/tests/0.  TODO: apply the rules to the vector,
	 * write the result to standard output, and compare with the
	 * contents of ../res/tests/1. */

  int neighbor_counter=0;
	int max_gen = 0;
	bool position = false;
  vector<vector<bool> > newworld;
  newworld = world;

	cin >> max_gen;

while(max_gen>0)
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

    //Rules for amount of neighbors around a specific cell


		//(i-1+j)%j
		//(j-1+i)%i
 neighbor_counter=0;




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

	cout << newworld[i][j];
	}
	cout << "\n";
	}
	cout << newworld.size() << "\n";
	world = newworld;
	max_gen--;
}


		//cout << world[i][j] << "\n";
		//cout << neighbor_counter++ << "\n";
	return 0;
}
