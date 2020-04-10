/*
 * CSc103 Project 2: prime numbers.
 * See readme.html for details.
 * Please list all references you made use of in order to complete the
 * assignment: your classmates, websites, etc.  Aside from the lecture notes
 * and the book, please list everything.  And remember- citing a source does
 * NOT mean it is okay to COPY THAT SOURCE.  What you submit here **MUST BE
 * YOUR OWN WORK**.
 * References:
 *
 */

#include<iostream>
using std::cin;
using std::cout;

//TA's Notes
//A number n > 1 is prime if it has no positive divisors other than 1 itself
//If k is a divisor of n: n % k == 0
//If n>2, n%k !=0, for all k from 2 to n-1, then n is prime
//if k is not a divisor of n: n % k != 0
//so if there exists a k such that n % k == 0, n is not prime

  int main()
{
  int n;

  while(cin>>n)
  {
  int k;
  bool prime_number; // I decided to use a boolean variable instead of an int to switch  things up
  int prime_counter = 0;
  k = n-1;
      while(k != 0)
      {
      if(n % k == 0)
      {
        prime_counter++;
        k--;
      }
      else if(n % k != 0)
      {
        k--;
      }
      }
      if(prime_counter>=2)
      {
        prime_number = false;
      }
      else
      {
        prime_number = true;
      }
      if(n==1)
      {
        prime_number = false;
      }
      cout << prime_number << "\n";
  }
return 0;
}
