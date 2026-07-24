/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 18:55:41 by joloo             #+#    #+#             */
/*   Updated: 2026/07/24 17:18:37 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

static void	print_grid(int grid[6][6])
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < 6)
	{
		ft_putchar(grid[x][y] + '0');
		ft_putchar(',');
		ft_putchar(' ');
		y++;
		if (y >= 6)
		{
			ft_putchar('\n');
			y = 0;
			x++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	grid[6][6];

	if (parsing(argc, argv[1], grid) == -1)
		return (1);
	if (DEBUG_FLAG == 1)
		debug_grid(grid);
	generate_solution(1, 1, 4, grid);
	print_grid(grid);
	return (0);
}
