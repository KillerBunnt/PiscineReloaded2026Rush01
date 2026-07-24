#include "rush01.h"
#include <stdio.h>

int	generate_solution(int xpos, int ypos, int size, int grid[6][6])
{
	// int	valid;

	while (grid[1][1] < size)
	{
		if (++(grid[xpos][ypos]) > size)
		{
			grid[xpos][ypos] = 0;
			if (--ypos < 1)
			{
				xpos--;
				ypos = size;
			}
			if (xpos < 1)
				xpos++;
		}
		else if (!is_invalid(grid, xpos, ypos, grid[xpos][ypos]))
		{
			if (++ypos > size)
			{
				xpos++;
				ypos = 1;
			}
			if (grid[size][size])
				return (0);
		}
	}
	return (1);
}
//12345
//12345 12345 12345 12345 12345
#include <stdio.h>
int main(int argc, char **argv)
{
	int grid[6][6] = {0};
	parsing(argc, argv, grid);
	generate_solution(1, 1, 4, grid);
	//start test
	// printf("testing for: val-%d, x-%d, y-%d\n", grid[xpos][ypos], xpos, ypos);
	int x = 0;
	int y = 0;
	while (x < 6)
	{
		printf("%d, ", grid[x][y]);
		y++;
		if (y >= 6)
		{
			printf("\n");
			y = 0;
			x++;
		}
	}
	//end test
}
// //start test
// 	printf("testing for: val-%d, x-%d, y-%d\n", grid[xpos][ypos], xpos, ypos);
// 	int x = 0;
// 	int y = 0;
// 	while (x < 6)
// 	{
// 		printf("%d, ", grid[x][y]);
// 		y++;
// 		if (y >= 6)
// 		{
// 			printf("\n");
// 			y = 0;
// 			x++;
// 		}
// 	}
// //end test