// Project Euler: Problem 7
//
// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13,
// we can see that the 6th prime is 13.
// What is the 10 001st prime number?/

#include <iostream>

using namespace std;
using u64 = unsigned long long;

u64 isPrime(u64 n)
{
	if (n % 2 == 0)
		return false;
	for (u64 i = 3; i * i <= n; i += 2)
		if (n % i == 0)
			return false;
	return true;
}

u64 nextPrime(u64 n)
{
	if (n == 0)
		return 2;
	for (n += 1 + (n % 2);; n += 2)
		if (isPrime(n))
			return n;
}

int main()
{
	u64 nthPrime = 0;
	int n = 10001;

	for (int i = 0; i < n; ++i)
	{
		nthPrime = nextPrime(nthPrime);
		//cout << nthPrime << endl;
	}

	cout  << "result:  " << nthPrime << endl;


	return 0;
}
