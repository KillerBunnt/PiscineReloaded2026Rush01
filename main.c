/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 18:55:41 by joloo             #+#    #+#             */
/*   Updated: 2026/07/23 19:38:46 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	main(int argc, char **argv)
{
	int grid[6][6] = {0};

	if (parsing(argc, argv, grid) == -1)
		return (1);
	if (DEBUG_FLAG == 1)
		debug_grid(grid);
	return (0);
}
