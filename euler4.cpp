// Project Euler: Problem 4
// Largest palindrome product
// A palindromic number reads the same both ways.
// The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3-digit numbers.
#include <iostream>

using namespace std;


bool isPalindrome(int n)
{
	int reverse = 0;
	for (int m = n; m > 0; m /= 10)
	{
		reverse *= 10;
		reverse += m % 10;
	}
	return n == reverse;
}



int main()
{
	int maxPalindrome = 0;
	int start = 100;
	int end = start * 10;

	for (int i = start; i < end; ++i)
		for (int j = i; j < end; ++j)
		{
			int product = i * j;
			if (isPalindrome(product) && product > maxPalindrome)
					maxPalindrome = product;
		}
	cout << maxPalindrome << endl;

	return 0;
}
