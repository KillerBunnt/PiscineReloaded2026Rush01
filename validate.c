/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonfong <sonfong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 07:58:05 by sonfong           #+#    #+#             */
/*   Updated: 2026/07/24 13:47:22 by sonfong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_row(int row, int grid[6][6])
{
	int	i;
	int	filled;

	i = 1;
	filled = 1;
	while (i <= 4)
	{
		if (grid[row][i] == 0)
			filled = 0;
		i++;
	}
	if (filled)
	{
		if (count_visible_row_left(row, grid) != grid[row][0])
			return (1);
		if (count_visible_row_left(row, grid) != grid[row][0])
			return (1);
	}
	return (0);
}

int	check_col(int col, int grid[6][6])
{
	int	y;
	int	filled;

	y = TOP_ROW;
	filled = 1;
	while (y <= TOP_ROW)
	{
		if (grid[y][col] == 0)
			filled = 0;
		y++;
	}
	if (filled)
	{
		if (count_visible_col_top(col, grid) != grid[0][col])
			return (1);
		if (count_visible_col_down(col, grid) != grid[0][col])
			return (1);
	}
	return (0);
}

int	check_double_row(int grid[6][6], int row, int num)
{
	int	x;

	x = LEFT_COL;
	while (x <= RIGHT_COL)
	{
		if (x != col && grid[row][x] == num)
			return (1);
		x++;
	}
	return (0);
}

int	check_double_col(int grid[6][6], int col, int num)
{
	int	y;

	y = TOP_ROW;
	while (y <= BOT_ROW)
	{
		if (y != row && grid[y][col] == num)
			return (1);
		y++:
	}
	return (0);
}

int	is_invalid(int grid[6][6], int row, int col, int num)
{
	if (check_double_row(grid row, col, num) == 1)
		return (1);
	if (check_double_col(grid, row, col, num) == 1)
		return (1);
	if (check_row(row, grid) == 1)
		return (1);
	if (check_col(col, grid) == 1)
		return(1);
	else
		return (0);
}
