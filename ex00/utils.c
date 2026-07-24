/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 19:09:44 by joloo             #+#    #+#             */
/*   Updated: 2026/07/24 16:57:22 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	print_error(char *str)
{
	write(1, "Error\n", 6);
	if (str != NULL)
		write(1, str, ft_strlen(str));
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
