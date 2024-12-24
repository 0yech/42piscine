/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nroussy <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:24:59 by nroussy           #+#    #+#             */
/*   Updated: 2024/09/01 22:52:04 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush01.h"

void	ft_rm_value(char value[4][4][5], int x, int y)
{
	value[x][y][1] = '0';
	value[x][y][2] = '0';
	value[x][y][3] = '0';
	value[x][y][4] = '0';
}

void	ft_fill_last_case(char value[4][4][5])
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (value[x][y][0] != '0')
			{
				ft_rm_value(value, x, y);
			}
		x++;
		}
	y++;
	}
}

int	main(int argc, char **argv)
{
	char	value[4][4][5];
	char	data[17];
	int	c;

	c = 0;
	if (argc == 2)
	{
		if (ft_initialize_and_test_data(data, argv[1]) == 0)
			return (0);
		ft_initialize_value(value);
		ft_first_check(value, data);
		while (c++ < 142)
			ft_while_check(value);
		if (c == 142)
		{
			write(1, "Error", 5);
			return (0);
		}
		else
		{
			ft_puttab(value);
		}
	}
	return (0);
}
