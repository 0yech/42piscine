/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettle.etan@protonmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:49:29 by estettle          #+#    #+#             */
/*   Updated: 2024/09/10 14:14:12 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

// Library includes
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

// /src/grid.c
int		is_grid_valid(char *grid);

// /src/input.c
char	**read_file(char *path);
int		file_size(char *path);

// /src/main.c
void	ft_err(int err_nb);

// /src/solve.c
void	solve(char **str, int tablen, int tabhei, char c);

// /src/utils.c
int		ft_strlen(char *str);
int		first_line_atoi(char *str);
char	*concat_line(char *dest, char *src);

#endif
