// Euler Project: Problem 5
// 2520 is the smallest number
// that can be divided by each of the numbers from 1 to 10 without any remainder.
//
// What is the smallest positive number
// that is evenly divisible by all of the numbers from 1 to 20?/
#include <iostream>
#include <climits>

using namespace std;

bool isDivisable(int n, int d)
{
	return n%d == 0;
}

int main()
{
	for (unsigned int i = 2;; ++i)
	{
		bool check = true;
		for (int j = 20; j > 10; --j)
		{
			if (!isDivisable(i,j))
			{
				check = false;
				break;
			}
		}

		if (check)
		{
			cout << i << endl;
			break;
		}
	}
	cout << "end of program!" << endl;
	return 0;
}
