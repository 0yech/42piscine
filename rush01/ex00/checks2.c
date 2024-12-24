/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:54:10 by nrey              #+#    #+#             */
/*   Updated: 2024/09/01 19:54:22 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush01.h"

void	ft_puttab(char tab[4][4][5])
{
	int	x;
	int	y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			write(1, &tab[x][y][0], 1);
			x++;
			if (x < 4)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
		y++;
	}
}

void	ft_remove_others(char value[4][4][5], int x, int y, int f)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < 4)
	{
		value[x][a][f] = '0';
		a++;
	}
	while (b < 4)
	{
		value[b][y][f] = '0';
		b++;
	}
}

void	ft_check_if_others(char value[4][4][5])
{
	int	x;
	int	y;
	int	f;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (value[x][y][0] != '0')
			{
				f = value[x][y][0] - '0';
				ft_remove_others(value, x, y, f);
			}
		x++;
		}
	y++;
	}
}
