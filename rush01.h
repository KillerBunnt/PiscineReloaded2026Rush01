/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 18:55:39 by joloo             #+#    #+#             */
/*   Updated: 2026/07/23 18:57:07 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
 #define RUSH01_H

#ifndef TOP_ROW
# define TOP_ROW 1
# endif

#ifndef BOT_ROW
# define BOT_ROW 4
# endif

#ifndef LEFT_COL
# define LEFT_COL 1
# endif

#ifndef RIGHT_COL
# define RIGHT_COL 4
# endif

#ifndef TRUE
# define TRUE 1
# endif

#ifndef FALSE
# define FALSE 0
# endif

typedef struct s_data
{
	char	grid[6][6];

} t_data;


#endif