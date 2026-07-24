/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 18:55:39 by joloo             #+#    #+#             */
/*   Updated: 2026/07/23 19:37:55 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
 #define RUSH01_H

#include <unistd.h>

# define TOP_ROW 1
# define BOT_ROW 4
# define LEFT_COL 1
# define RIGHT_COL 4

# define MAX_HEIGHT 4

# define DEBUG_FLAG 1

void	debug_grid(int grid[6][6]);

int	parsing(int argc, char **argv, int grid[6][6]);
int	generate_solution(int xpos, int ypos, int val, int grid[6][6]);

void	print_error(void);
void	ft_putchar(char c);

#endif