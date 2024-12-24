/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:47:39 by nrey              #+#    #+#             */
/*   Updated: 2024/09/10 14:25:32 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsq.h"

/*
int	grid_check(char **grid, int i, int j, int len)
{
	while (grid[i][j])
	{
		j = 0;
		while (grid[i][j])
		{
			if (j > len)
				return (1);
			if (grid[i][len] != '\n')
				return (1);
			if (grid[i][j] < 32 || grid[i][j] > 126)
				return (1);
			j++;
		}
		if (j != len)
			return (1);
	}
	return (0);
}

 * In case of an invalid map, 0 will be returned.
 * if 0 is returned, the program should display
 * "map error" on the standard output followed by
 * a Newline.
 *
 * If 1 is returned from these functions, it means
 * the map is valid.
 *
 * (should)


int	is_grid_valid(char **grid)
{
	int len;
	int fstlen;
	int i;
	int j;
	char c[3];

	i = 1;
	j = 0;
	fstlen = ft_strlen(grid[0]);
	if (fstlen < 5)
		return (1);
	c[0] = grid[0][fstlen - 2];
	c[1] = grid[0][fstlen - 1];
	c[2] = grid[0][fstlen];
	len = ft_strlen(grid[1]);
	if (grid[1] == 0)
		return (1);
	if (grid[i][j] != c[0] || grid[i][j] != c[1] || grid[i][j] != c[2])
		return (1);
	grid_check(grid, i, j, len);
	return (0);
}
*/
int	grid_check(char *grid, int n, int j, char c[3])
{
	int e;

	while (grid[j])
	{
		e = j;
		while (grid[e] != '\n')
			e++;
		if (e != (n + j) && grid[e] != '\n')
			return (1);
		if ((grid[j] != c[0]) || (grid[j] != c[1]) || (grid[j] != c[2]) \
			|| (grid[j] != '\n'))
			return (1);
		if (grid[j] < 32 || grid[j] > 126)
			return (1);
		j++;
	}
	return (0);
}

int	is_grid_valid(char *grid)
{
	int	n;
	int i;
	int j;
	char c[3];

	i = 0;
	j = i + 1;
	n = i + 1;
	while (grid[i] != '\n')
		i++;
	if (i < 5)
		return (0);
	while (grid[n] != '\n')
		n++;
	c[0] = grid[i - 3];
	c[1] = grid[i - 2];
	c[2] = grid[i - 1];
	if (n <= 1)
		return (1);
	grid_check(grid, n, j, c);
	return(0);
}
