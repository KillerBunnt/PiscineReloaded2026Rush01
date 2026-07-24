/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 19:06:38 by joloo             #+#    #+#             */
/*   Updated: 2026/07/24 16:51:32 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

// static int	valid_num(int num)
// {
// 	if (num > MAX_HEIGHT || num < 0)
// 		return (-1);
// 	return (0);
// }

static void fill_grid(char *input, int grid[6][6])
{
	int	i;

	i = 0;
	while (i < MAX_HEIGHT * 4)
	{
		if (i < MAX_HEIGHT * 1)
		{
			grid[TOP_ROW - 1][LEFT_COL + (i % MAX_HEIGHT)] = input[i * 2] - '0';
		}
		else if (i < MAX_HEIGHT * 2)
		{
			grid[BOT_ROW + 1][LEFT_COL + (i % MAX_HEIGHT)] = input[i * 2]- '0';
		}
		else if (i < MAX_HEIGHT * 3)
		{
			grid[TOP_ROW + (i % MAX_HEIGHT)][LEFT_COL - 1] = input[i * 2]- '0';
		}
		else
		{
			grid[TOP_ROW + (i % MAX_HEIGHT)][RIGHT_COL + 1] = input[i * 2]- '0';
		}
		i++;
	}
}
int	parsing(int argc, char *input, int grid[6][6])
{
	if (argc != 2)
	{
		print_error();
		return (-1);
	}
	fill_grid(input, grid);
	return (0);
}
