/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nroussy <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:24:59 by nroussy           #+#    #+#             */
/*   Updated: 2024/09/01 18:06:31 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush01.h"

int	ft_initialize_and_test_data(char *data, char *argv)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	j = 0;
	t = 0;
	while (j <= 30)
	{
		if (argv[j] < '0' || argv[j] > '4')
		{
			write(1, "Error\n", 6);
			return (0);
		}
		t = t + (argv[j] - '0');
		data[i++] = argv[j];
		j = j + 2;
	}
	data[i] = '\0';
	if (t < 32 || t > 36)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}

void	ft_initialize_value(char value[4][4][5])
{
	int	x;
	int	y;
	int	z;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			z = 0;
			while (z < 5)
			{
				value[x][y][z] = z + '0';
				z++;
			}
			x++;
		}
		y++;
	}
}

void	ft_first_check(char value[4][4][5], char *data)
{
	ft_check_data_egal_4(value, data);
	ft_check_data_egal_1(value, data);
	ft_check_data_egal_3(value, data);
}

void	ft_while_check(char value[4][4][5])
{
	ft_check_if_others(value);
	ft_only_one_possibility_per_line(value);
	ft_only_one_possibility_per_col(value);
	ft_fill_last_case(value);
}
