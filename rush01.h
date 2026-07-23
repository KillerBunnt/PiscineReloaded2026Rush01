/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 18:55:39 by joloo             #+#    #+#             */
/*   Updated: 2026/07/23 19:22:19 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
 #define RUSH01_H

# define TOP_ROW 1
# define BOT_ROW 4
# define LEFT_COL 1
# define RIGHT_COL 4

// typedef struct s_data
// {
// 	char	grid[6][6];

// } t_data;


int	parsing(int argc, char **argv, char grid[6][6]);

void	print_error(void);

#endif