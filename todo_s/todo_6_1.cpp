#include<iostream>
using std::cin;
using std::cout;

int max_val(int x, int y, int z)
{
  int maxval;

  if(x > y && x > z)
  {
    maxval = x;
  }
  else if (y > x && y > z)
  {
    maxval = y;
  }
  else if (z > x && z > y)
  {
    maxval = z;
  }
  return maxval;
}

int main()
{
  int x, y, z, max;
  cout << "Enter first, second, and third value \n";
  cin >> x >> y >> z;

  max = max_val(x,y,z);

  cout << "Your max value is : " << max << "\n";

  return 0;
}