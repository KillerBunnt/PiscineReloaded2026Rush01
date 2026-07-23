/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 18:55:41 by joloo             #+#    #+#             */
/*   Updated: 2026/07/23 18:59:22 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

// point of function: convert t_data into a pointer immediately
static int	main2(int argc, char **argv, t_data *data)
{

}

int	main(int argc, char **argv)
{
	t_data data;

	return (main2(argc, argv, &data));
}
