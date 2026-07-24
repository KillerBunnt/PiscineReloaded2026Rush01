#include "rush01.h"

int	generate_solution(int xpos, int ypos, int size, int grid[6][6])
{
	int	valid;

	if (xpos >= size)
		return (0);
	grid[xpos][ypos]++;
	if (grid[xpos][ypos] > size)
	{
		grid[xpos][ypos] = 0;
		return (1);
	}
	if (/*check if invalid*/)
		return (generate_solution(xpos, ypos, size, grid[6][6]));
	else
	{
		if (ypos >= size)
			return (generate_solution(xpos + 1, 1, size, grid[6][6]));
		else
			return (generate_solution(xpos, ypos + 1, size, grid[6][6]));
	}
}
//12345
//12345 12345 12345 12345 12345
// #include <stdio.h>
// int main()
// {
// 	int grid[6][6] = {0};
// 	generate_solution(0, 0, 0, grid);
// 	printf("%d", grid[0][0]);
// }