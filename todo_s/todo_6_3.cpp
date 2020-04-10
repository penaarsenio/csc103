#include<iostream>
using std::cin;
using std::cout;

void swap(int x, int y)
{
  int z;

  z=x;
  x=y;
  y=z;

  cout << x << " " << y << "\n";

}

int main()
{
  int x, y, swap_val;
  cout << "Enter first and second parameter \n";
  cin >> x >> y;

  //swap_val = swap(x,y);
  swap(x,y);
  //cout << "Your swapped value are: " << swap(x,y) << "\n";

  return 0;
}