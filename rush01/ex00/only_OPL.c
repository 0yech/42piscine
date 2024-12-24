/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nroussy <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:24:59 by nroussy           #+#    #+#             */
/*   Updated: 2024/09/01 19:48:29 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_only_one_possibility_per_line(char value[4][4][5])
{
	int		y;
	int		z;
	char	n;

	z = 1;
	while (z < 5)
	{
		n = z + '0';
		y = 0;
		while (y < 4)
		{
			ft_only_opl_p2(value, y, z, n);
			ft_only_opl_p3(value, y, z, n);
			ft_only_opl_p4(value, y, z, n);
			ft_only_opl_p5(value, y, z, n);
			y++;
		}
		z++;
	}
}

void	ft_only_opl_p2(char value[4][4][5], int y, int z, char n)
{
	if (
		(value[0][y][0] != n)
		&& (value[1][y][0] != n)
		&& (value[2][y][0] != n)
		&& (value[3][y][0] != n)
		)
	{
		if (
			(value[0][y][z] > value[1][y][z])
			&& (value[0][y][z] > value[2][y][z])
			&& (value[0][y][z] > value[3][y][z])
			)
				value[0][y][0] = value[0][y][z];
	}
}

void	ft_only_opl_p3(char value[4][4][5], int y, int z, char n)
{
	if (
		(value[0][y][0] != n)
		&& (value[1][y][0] != n)
		&& (value[2][y][0] != n)
		&& (value[3][y][0] != n)
		)
	{
		if (
			(value[1][y][z] > value[0][y][z])
			&& (value[1][y][z] > value[2][y][z])
			&& (value[1][y][z] > value[3][y][z])
			)
				value[1][y][0] = value[1][y][z];
	}
}

void	ft_only_opl_p4(char value[4][4][5], int y, int z, char n)
{
	if (
		(value[0][y][0] != n)
		&& (value[1][y][0] != n)
		&& (value[2][y][0] != n)
		&& (value[3][y][0] != n)
		)
	{
		if (
			(value[2][y][z] > value[0][y][z])
			&& (value[2][y][z] > value[1][y][z])
			&& (value[2][y][z] > value[3][y][z])
			)
				value[2][y][0] = value[2][y][z];
	}
}

void	ft_only_opl_p5(char value[4][4][5], int y, int z, char n)
{
	if (
		(value[0][y][0] != n)
		&& (value[1][y][0] != n)
		&& (value[2][y][0] != n)
		&& (value[3][y][0] != n)
		)
	{
		if (
			(value[3][y][z] > value[0][y][z])
			&& (value[3][y][z] > value[1][y][z])
			&& (value[3][y][z] > value[2][y][z])
			)
				value[3][y][0] = value[3][y][z];
	}
}
