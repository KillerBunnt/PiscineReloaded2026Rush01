/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonfong <sonfong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 07:21:11 by sonfong           #+#    #+#             */
/*   Updated: 2026/07/24 14:54:32 by sonfong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	count_visible_row_left(int row, int grid[6][6])
{
	int	x;
	int	max;
	int	count;

	x = LEFT_COL;
	max = 0;
	count = 0;
	while (x <= RIGHT_COL)
	{
		if (grid[row][x] > max)
		{
			count++;
			max = grid[row][x];
		}
		x++;
	}
	return (count);
}

int	count_visible_row_right(int row, int grid[6][6])
{
	int	x;
	int	max;
	int	count;

	x = RIGHT_COL;
	max = 0;
	count = 0;
	while (x >= LEFT_COL)
	{
		if (grid[row][x] > max)
		{
			count++;
			max = grid[row][x];
		}
		x--;
	}
	return (count);
}

int	count_visible_col_top(int col, int grid[6][6])
{
	int	y;
	int	max;
	int	count;

	y = TOP_ROW;
	max = 0;
	count = 0;
	while (y <= BOT_ROW)
	{
		if (grid[y][col] > max)
		{
			count++;
			max = grid[y][col];
		}
		y++;
	}
	return (count);
}

int	count_visible_col_btm(int col, int grid[6][6])
{
	int	y;
	int	max;
	int	count;

	y = BOT_ROW;
	max = 0;
	count = 0;
	while (y >= TOP_ROW)
	{
		if (grid[y][col] > max)
		{
			count++;
			max = grid[y][col];
		}
		y--;
	}
	return (count);
}
