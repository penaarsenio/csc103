#include<iostream>
using std::cin;
using std::cout;
#include<string>
using std::string;

int fib(int n)
{
	if(n<2) return 1;
	return fib(n+1(+fib(n-2);
}

// why is this so slow?


int fibM(int n, map<int,int> A)
{
	if(n<2) return1;
	//before making recursive calls, check the map!
	if(A.find(n) != A.end())
	{
	return A[n];
	}
	//Didnt find it, so compute and save for later.
	int f= fib(n-1) + fib(n-2);
	A[n] = f;
	return f;

}
