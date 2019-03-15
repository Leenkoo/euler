// Project Euler: problem 15
// 
// Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down,
// there are exactly 6 routes to the bottom right corner.
// 
// How many such routes are there through a 20×20 grid?

#include <iostream>
#include <array>

std::array<std::array<long,21>,21> memo;

long paths(int x, int y, int limitX, int limitY)
{
	if (x == limitX && y == limitY)
		return 1;

	if (memo[x][y] != 0)
		return memo[x][y];

	long count = 0;
	if (x != limitX)
		count += paths(x+1, y, limitX, limitY);
	if (y != limitY)
		count += paths(x, y+1, limitX, limitY);
	
	memo[x][y] = count;
	return count;
}

int main()
{
	std::cout << paths(0,0,20,20) << std::endl;
	return 0;
}
