#include <iostream>
using std::cin;
using std::cout;
#include<string>
using std::string;

int main()
{
 string first_name;
 string relative;

 cout << "Enter your name:\n";
 //cin >> first_name;
 getline(cin,first_name);
 cout << "Enter a relative:\n";
 //cin >> relative;
 getline(cin,relative);
 cout << "Hello. My name is " << first_name << "." << " You killed my " << relative << "." << " Prepare to die.\n";
	return 0;
}
