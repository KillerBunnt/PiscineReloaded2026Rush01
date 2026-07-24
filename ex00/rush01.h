/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 18:55:39 by joloo             #+#    #+#             */
/*   Updated: 2026/07/24 17:08:37 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>

# define TOP_ROW 1
# define BOT_ROW 4
# define LEFT_COL 1
# define RIGHT_COL 4

# define MAX_HEIGHT 4

# define DEBUG_FLAG 0

void	debug_grid(int grid[6][6]);
int		parsing(int argc, char *input, int grid[6][6]);
int		generate_solution(int xpos, int ypos, int val, int grid[6][6]);
int		count_visible_row_left(int row, int grid[6][6]);
int		count_visible_row_right(int row, int grid[6][6]);
int		count_visible_col_top(int col, int grid[6][6]);
int		count_visible_col_btm(int col, int grid[6][6]);
int		is_invalid(int grid[6][6], int row, int col, int num);
void	print_error(char *str);
void	ft_putchar(char c);
int		ft_strlen(char *str);

#endif
