// Project Euler: problem 10
// Summation of primes

// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

// Find the sum of all the primes below two million.

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
	const int limit = 2e6; 
	u64 sum = 0;
	for (u64 prime = nextPrime(0); prime < limit; prime = nextPrime(prime))
		sum += prime;
	cout << sum << endl;

	return 0;
}
