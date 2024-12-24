/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettle.etan@protonmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:47:40 by estettle          #+#    #+#             */
/*   Updated: 2024/09/09 18:21:07 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsq.h"

/* ft_strlen()
 * what do you think?
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* first_line_atoi()
 * this is a cute little function that's pretty much a heavily specialized
 * version of atoi to use on the first line of grids (the one with informations,
 * like "9.ox"). It checks and gets the number of lines specifically.
*/
int	first_line_atoi(char *str)
{
	int	i;
	int	return_int;
	int	str_len;

	i = 0;
	return_int = 0;
	str_len = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9' && i < (ft_strlen(str) - 3))
		return_int = return_int * 10 + (str[i++] - '0');
	return (return_int);
}

/* concat_line()
 * this function is a bit like a standard concatenatation function but instead
 * of concatenating the entire string, it stops at the first '\n' in the src
 * string.
*/
char	*concat_line(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] != '\n')
		dest[i++] = src[j++];
	dest[i] = '\n';
	return (dest);
}
