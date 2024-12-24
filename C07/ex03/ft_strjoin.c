/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:27:47 by nrey              #+#    #+#             */
/*   Updated: 2024/09/04 14:27:58 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strslen(char **strs, int size)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	j = 0;
	while (size)
	{
		j = 0;
		while (strs[i][j++])
			c++;
		i++;
		size--;
	}
	return (c);
}

char	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strscat(char *result, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	c;

	j = 0;
	i = 0;
	c = 0;
	while (size)
	{
		i = 0;
		while (strs[c][i])
			result[j++] = strs[c][i++];
		i = 0;
		if (size != 1)
		{
			while (sep[i])
				result[j++] = sep[i++];
		}
		c++;
		size--;
	}
	result[j] = 0;
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	char	*output;

	if (size <= 0)
		return (malloc(1));
	result = malloc(ft_strslen(strs, size) + ft_strlen(sep) * (size - 1) + 1);
	if (size == 0)
		return (0);
	output = ft_strscat(result, strs, sep, size);
	return (output);
}
