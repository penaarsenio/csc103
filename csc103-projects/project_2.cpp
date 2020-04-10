#include<iostream>
using std::cin;
using std::cout;

int main()
{

//A number n>1 is prime if it has no positive divisors other than 1 itself
//If k is a divisor of n: n%k==0
//If n>2, n%k !=0, for all k from 2 to n-1, then n is prime
//if k is not a divisor of n: n%k !=0
//so if there exists a k such that n%k==0, n is not prime
  int n;
  while(cin>>n)
  {
  int k;
  int prime_number = 0;
  int prime_counter = 0;
  k = n-1;
      while(k != 0)
      {
      //k = n-1;
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
        prime_number = 0;
      }
      else
      {
        prime_number = 1;
      }
      if(n==1)
      {
        prime_number = 0;
      }
      cout << prime_number << "\n";
  }
return 0;
}