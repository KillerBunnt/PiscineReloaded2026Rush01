/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 19:06:38 by joloo             #+#    #+#             */
/*   Updated: 2026/07/23 19:53:19 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

// static int	valid_num(int num)
// {
// 	if (num > MAX_HEIGHT || num < 0)
// 		return (-1);
// 	return (0);
// }

static void fill_grid(char **argv, int grid[6][6])
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i < 4)
		{
			grid[0][LEFT_COL + i] = argv[1][i * 2] - '0';
		}
		else if (i < 8)
		{
			grid[5][LEFT_COL + i - 4] = argv[1][i * 2]- '0';
		}
		else if (i < 12)
		{
			grid[TOP_ROW + i - 8][0] = argv[1][i * 2]- '0';
		}
		else
		{
			grid[TOP_ROW + i - 12][5] = argv[1][i * 2]- '0';
		}
		i++;
	}
}
int	parsing(int argc, char **argv, int grid[6][6])
{
	if (argc != 2)
	{
		print_error();
		return (-1);
	}
	fill_grid(argv, grid);
	return (0);
}
