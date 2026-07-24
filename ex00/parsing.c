/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 19:06:38 by joloo             #+#    #+#             */
/*   Updated: 2026/07/24 17:15:57 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

static int	check_valid_input(char *input)
{
	int	i;

	i = 0;
	if (ft_strlen(input) != ((MAX_HEIGHT * 4) * 2) - 1)
	{
		print_error("Invalid input (wrong amount)\n");
		return (-1);
	}
	while (input[i] != '\0' && i < ft_strlen(input))
	{
		if (input[i] - '0' > MAX_HEIGHT || input[i] - '0' < 0)
		{
			print_error("Non numeric input\n");
			return (-1);
		}
		i += 2;
	}
	return (0);
}

static void	fill_grid_with_zero(int grid[6][6])
{
	int	y;
	int	x;

	y = 0;
	while (y < 6)
	{
		x = 0;
		while (x < 6)
		{
			grid[y][x] = 0;
			x++;
		}
		y++;
	}
}

static void	fill_grid(char *input, int grid[6][6])
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
			grid[BOT_ROW + 1][LEFT_COL + (i % MAX_HEIGHT)] = input[i * 2] - '0';
		}
		else if (i < MAX_HEIGHT * 3)
		{
			grid[TOP_ROW + (i % MAX_HEIGHT)][LEFT_COL - 1] = input[i * 2] - '0';
		}
		else
		{
			grid[TOP_ROW + (i % MAX_HEIGHT)][RIGHT_COL + 1]
				= input[i * 2] - '0';
		}
		i++;
	}
}

int	parsing(int argc, char *input, int grid[6][6])
{
	if (argc != 2)
	{
		print_error("Invalid number of args\n");
		return (-1);
	}
	if (check_valid_input(input) == -1)
		return (-1);
	fill_grid_with_zero(grid);
	fill_grid(input, grid);
	return (0);
}
