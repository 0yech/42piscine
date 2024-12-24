/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettle.etan@protonmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:05:43 by estettle          #+#    #+#             */
/*   Updated: 2024/09/11 15:05:35 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsq.h"

void	put_ans(char **grid, int x, int y, int size)
{
	int sizecpy;

	sizecpy = size;
	while (size > 0)
	{
		while (sizecpy > 0)
		{
			grid[y][x] = 'x';
			x--;
			sizecpy--;
		}
		y--;
		size--;
	}
}

void	rec(char **str, int x, int y, char c)
{
	int offset;
	int ffse;
	int size;

	size = 1;
	offset = 0;
	while(str[y][x] == c)
	{
		x++;
		y++;
		offset++;
		ffse = offset;
		while(ffse > 0)
		{
			if (str[y - ffse][x] != c || str[y][x - ffse] != c)
			{
				put_ans(str, x, y, (offset + 1));
				break ;
			}
			ffse--;
		}
	}
	put_ans(str, x, y, (offset + 1));
}

/* write_answer()
 * this function uses the coordinates found by the solve() function and writes
 * the actual square onto the grid.
*/
/*
char	**write_answer(char **grid, int *coordinates)
{
	int		x;
	int		y;
	char	c_answer;

	c_answer = grid[0][ft_strlen(grid[0]) - 2];
	y = coordinates[1];
	while (y <= coordinates[3])
	{
		x = coordinates[0];
		while (x <= coordinates[2])
			grid[y][(x++ - 1)] = c_answer;
		y++;
	}
	return (grid);
}
*/
#include <stdio.h>

void	solve(char **str, int tablen, int tabhei, char c)
{
	int	x;
	int	y;
	int	*cord;
	int	f;

	y = 1;
	f = 0;
	cord = malloc(sizeof(int) * 4);
	while (y <= tabhei)
	{
		x = 0;
		while(x < tablen)
		{
			if (str[y][x] == c)
				rec(str, x, y, c);
			x++;
		}
		y++;
	}
}
/*
char	**solve(char **str, int tablen, int tabhei, char c)
{
	int	x;
	int	y;
	int	*cord;
	int	f;

	x = 0;
	y = 0;
	f = 0;
	cord = malloc(sizeof(int) * 4);
	while (y < tabhei)
	{
		x = 0;
		while (x < tablen)
		{
			if (str[y][x] == c)
			{
				f = rec(str, x, y, c);
				cord[0] = x;
				cord[1] = y;
				cord[2] = f + x;
				cord[3] = f + y;
			}
			x++;
		}
		y++;
	}
	int	i;
	i = 0;
	while (i < 4)
		printf("%d\n", cord[i++]);
	return (write_answer(str, cord));
}
*/

