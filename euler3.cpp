// Project Euler: Problem 3
// Largest prime factor
// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

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
	for (n += 1 + (n % 2);; n += 2)
		if (isPrime(n))
			return n;
}

int main()
{
	u64 n = 600851475143;
	u64 factor = 2;
	
	for (int i = 0; n != 1;)
	{
		if (n % factor == 0)
		{
			n /= factor;
			cout << ++i << ": " << factor << endl;
		}
		else
			factor = nextPrime(factor);
	}

	cout << factor << endl;
	return 0;
}
