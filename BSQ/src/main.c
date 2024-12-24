/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettle.etan@protonmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:49:55 by estettle          #+#    #+#             */
/*   Updated: 2024/09/10 14:45:56 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsq.h"

/* ft_err()
 * this function handles errors program wide, displaying a different message
 * depending on the int it's been called with.
*/
void	ft_err(int err_nb)
{
	if (err_nb == 1)
	{
		write(1, "[!] - Please provide valid file paths as arguments.\n", 51);
		exit(1);
	}
	else if (err_nb == 2)
	{
		write(1, "[!] - Error 2 was raised.\n", 25);
		exit(2);
	}
	else if (err_nb == 3)
	{
		write(1, "map error\n", 11);
		exit(3);
	}
}

/* print_grid()
 * this function prints the given grid, line by line
*/
void	print_grid(char **grid)
{
	int	i;
	int	j;

	i = 0;
	while (i < (first_line_atoi(grid[0]) + 1))
	{
		j = 0;
		while (grid[i][j])
			write(1, &grid[i][j++], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	char	**grid;

	if (argc == 1)
		ft_err(1); // read from standard input (to be written)
	i = 1;
	while (i < argc)
	{
		grid = read_file(argv[i++]);
		print_grid(grid);
		solve(
				grid,
				ft_strlen(grid[1]) - 1,
				first_line_atoi(grid[0]),
				grid[0][ft_strlen(grid[0]) - 4]
			);
		print_grid(grid);
	}
	return (0);
}
