/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettle.etan@protonmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:49:45 by estettle          #+#    #+#             */
/*   Updated: 2024/09/10 13:22:07 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsq.h"

/* file_size()
 * this function goes through a file counting every character and returns its
 * size accordingly.
*/
int	file_size(char *path)
{
	int		size;
	int		file;
	char	buffer[1];

	file = open(path, O_RDONLY);
	size = 0;
	while (read(file, buffer, 1))
		size++;
	close(file);
	return (size);
}

/* init_grid()
 * this function is just here to initalize and allocate a bi-dimensional
 * array for a given grid
 * it takes into account the first line (10.ox) to determine the length of a 
 * line by using the size of the grid as a guide (10)
*/
char	**init_grid(char *grid_string)
{
	char	**result;
	int		line_count;
	int		i;
	int		j;

	line_count = first_line_atoi(grid_string);
	result = malloc(sizeof(char *) * (line_count + 1));
	i = 0;
	j = 0;
	while (*grid_string)
	{
		if (*grid_string == '\n')
		{
			result[j] = malloc(sizeof(char) * i);
			i = 0;
			j++;
		}
		i++;
		grid_string++;
	}
	return (result);
}

/* parse_grid()
 * this function takes a loooong string that's just been taken from a file
 * and parses it into a two dimensional array of chars (one string per line)
*/
char	**parse_grid(char *contents)
{
	int		i;
	int		line_number;
	char	**grid;

	i = 0;
	grid = init_grid(contents);
	line_number = first_line_atoi(contents) + 1;
	while (i < line_number)
	{
		grid[i] = concat_line(grid[i], contents);
		while (*contents != '\n')
			contents++;
		i++;
		contents++;
	}
	return (grid);
}

/* read_file()
 * this function reads a provided file and returns a two dimensional array
 * structured like [line by line][char by char]
*/
char	**read_file(char *path)
{
	int		file;
	char	*contents;
	char	**grid;

	contents = malloc(sizeof(char) * file_size(path));
	//if (!is_grid_valid(contents))
	//	ft_err(3);
	grid = 0;
	file = open(path, O_RDONLY);
	if (file == -1)
		ft_err(2);
	read(file, contents, file_size(path));
	close(file);
	grid = parse_grid(contents);
	return (grid);
}
