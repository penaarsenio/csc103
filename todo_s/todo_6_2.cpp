#include<iostream>
using std::cin;
using std::cout;

double average(double x, double y, double z)
{
  double avrg;

  avrg = (x + y + z)/3.0;

  return avrg;
}

int main()
{
  double x, y, z, avrg;
  cout << "Enter first, second, and third value \n";
  cin >> x >> y >> z;

  avrg = average(x,y,z);

  cout << "Your average value is : " << avrg << "\n";

  return 0;
}