/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdexmun <thdexmun@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 17:07:44 by thdexmun          #+#    #+#             */
/*   Updated: 2026/07/24 17:12:47 by thdexmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	generate_solution(int xpos, int ypos, int size, int grid[6][6])
{
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
//#include <stdio.h>
//int main(int argc, char **argv)
//{
//	int grid[6][6] = {0};
//	parsing(argc, argv, grid);
//	generate_solution(1, 1, 4, grid);
////start test
//// printf("testing for: val-%d, x-%d, y-%d\n", grid[xpos][ypos], xpos, ypos);
//	int x = 0;
//	int y = 0;
//	while (x < 6)
//	{
//		printf("%d, ", grid[x][y]);
//		y++;
//		if (y >= 6)
//		{
//			printf("\n");
//			y = 0;
//			x++;
//		}
//	}
////end test
//}
