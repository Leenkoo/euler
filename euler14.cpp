// Project Euler: problem 14
//
// The following iterative sequence is defined for the set of positive integers:
// 
// n → 3n + 1 (n is odd)
// 
// Using the rule above and starting with 13, we generate the following sequence:
// 
// 13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
// It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. 
// Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.
// 
// Which starting number, under one million, produces the longest chain?
#include <iostream>

using u64 = unsigned long long;


u64 collatz(u64 i)
{
	int chain = 1;
	while (i != 1)
	{
		if (i % 2 == 0)
			i /= 2;
		else
			i = 3 * i + 1;
		++chain;
	}
	return chain;
}

int main()
{
	u64 maxChain = 0;
	int longest = 0;
	for (int i = 1; i < 1e6; ++i)
	{
		u64 chain = collatz(i);
		if (chain > maxChain)
		{
			maxChain = chain;
			longest = i;
		}
	}
	std::cout << "result: " << longest << "\nchain length: " << maxChain << std::endl;
	return 0;
}


