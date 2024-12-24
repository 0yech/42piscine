/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nroussy <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:24:59 by nroussy           #+#    #+#             */
/*   Updated: 2024/09/01 19:44:48 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_only_one_possibility_per_col(char value[4][4][5])
{
	int		x;
	int		z;
	char	n;

	z = 1;
	while (z < 5)
	{
		n = z + '0';
		x = 0;
		while (x < 4)
		{
			ft_only_opc_p2(value, x, z, n);
			ft_only_opc_p3(value, x, z, n);
			ft_only_opc_p4(value, x, z, n);
			ft_only_opc_p5(value, x, z, n);
			x++;
		}
		z++;
	}
}

void	ft_only_opc_p2(char value[4][4][5], int x, int z, char n)
{
	if (
		(value[x][0][0] != n)
		&& (value[x][1][0] != n)
		&& (value[x][2][0] != n) \
		&& (value[x][3][0])
		)
	{
		if (
			(value[x][0][z] > value[x][1][z])
			&& (value[x][0][z] > value[x][2][z])
			&& (value[x][0][z] > value[x][3][z])
			)
				value[x][0][0] = value[x][0][z];
	}
}

void	ft_only_opc_p3(char value[4][4][5], int x, int z, char n)
{
	if (
		(value[x][0][0] != n)
		&& (value[x][1][0] != n)
		&& (value[x][2][0] != n)
		&& (value[x][3][0] != n)
		)
	{
		if (
			(value[x][1][z] > value[x][0][z])
			&& (value[x][1][z] > value[x][2][z])
			&& (value[x][1][z] > value[x][3][z])
			)
				value[x][1][0] = value[x][1][z];
	}
}

void	ft_only_opc_p4(char value[4][4][5], int x, int z, char n)
{
	if (
		(value[x][0][0] != n)
		&& (value[x][1][0] != n)
		&& (value[x][2][0] != n)
		&& (value[x][3][0] != n)
		)
	{
		if (
			(value[x][2][z] > value[x][0][z])
			&& (value[x][2][z] > value[x][1][z])
			&& (value[x][2][z] > value[x][3][z])
			)
				value[x][2][0] = value[x][2][z];
	}
}

void	ft_only_opc_p5(char value[4][4][5], int x, int z, char n)
{
	if (
		(value[x][0][0] != n)
		&& (value[x][1][0] != n)
		&& (value[x][2][0] != n)
		&& (value[x][3][0] != n)
		)
	{
		if (
			(value[x][3][z] > value[x][0][z])
			&& (value[x][3][z] > value[x][1][z])
			&& (value[x][3][z] > value[x][2][z])
			)
			value[x][3][0] = value[x][3][z];
	}
}	
