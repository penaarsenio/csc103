/*
 * CSc103 Project 1: (hello_world++)
 * See readme.html for details.
 * Please list all references you made use of in order to complete the
 * assignment: your classmates, websites, etc.  Aside from the lecture notes
 * and the book, please list everything.  And remember- citing a source does
 * NOT mean it is okay to COPY THAT SOURCE.  What you submit here **MUST BE
 * YOUR OWN WORK**.
 * References:
 * Professor, Lecture notes, and textbook
 */

#include <iostream> //#include pulls a specific file indicated between <>. iostream is a specific file that includes features to help write code
using std::cin; //using std:: gets a specific feature from iostream to be used in your code
using std::cout;
#include<string>
using std::string;

int main()
{
 // int main() is the body of your code
 string first_name; //This will store the first input value from the user. (page 62 in textbook)
 string relative; //This will store the second value

 cout << "Enter your name:\n";
 //cin >> first_name; <-This stores the users input as a string with no spaces inbetween
 getline(cin,first_name); //<- This one does (63)
 cout << "Enter a relative:\n";
 //cin >> relative;
 getline(cin,relative);
 cout << "Hello. My name is " << first_name << "." << " You killed my " << relative << "." << " Prepare to die.\n";
//cout will output strings, values, or quotes for the user to see
	return 0;
}


