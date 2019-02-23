// Project Euler: problem 9
// Special Pythagorean triplet
// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

// a2 + b2 = c2
// For example, 32 + 42 = 9 + 16 = 25 = 52.

// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int n = 1000;

	for (int a = 1; a < n/2; ++a)
	{
		for (int b = a+1; b <n/2; ++b)
		{
			double c = a*a + b*b;
			c = sqrt(c);
			if (c > n - (a+b))
				break;
			if (a + b + c == n)
				cout << a << " * " << b << " * " << c  << " = " << (int)(a*b*c) << endl;
		}
	}

	return 0;
}
