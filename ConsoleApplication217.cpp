// ConsoleApplication217.cpp : Defines the entry point for the console application.



#include <iostream>
#include <vector>
using namespace std;


 long long MAX_PRODUCT( long long n[], long long size)
{
	
	
	 n[0] = 0;
	 n[1] = 1;
	 

	 for (int i = 2; i <= size ; i++)
	 {
		 n[i] = n[i - 2] + n[i - 1];
	 }

	 return  n[size];

}


 long long FibonacciRe( long long size)
 {
	 if (size == 0 || size == 1)
	 {
		 return size;
	 }
	 
	 else
	 {
		 return FibonacciRe(size - 1) + FibonacciRe(size - 2);
	 }
 }


int main()
{
	int size = 0;

	cin >> size;

	long long * n = new long long[size];
      



	long long ANSWER = MAX_PRODUCT(n, size);
//	long long Not_Nice_Answer = FibonacciRe( size);

	cout << ANSWER << endl;
	//cout << Not_Nice_Answer << endl;

	system("PAUSE");

}


