/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:40:35 by nrey              #+#    #+#             */
/*   Updated: 2024/09/07 14:21:14 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *src)
{
	int		a;
	char	*dest;

	a = 0;
	dest = malloc(sizeof(dest) * (ft_strlen(src) + 1));
	if (dest == 0)
		return (NULL);
	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = 0;
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*gb;

	i = 0;
	gb = malloc((ac + 1) * sizeof(t_stock_str));
	if (!gb)
		return (NULL);
	while (i < ac)
	{
		gb[i].size = ft_strlen(av[i]);
		gb[i].str = av[i];
		gb[i].copy = ft_strcpy(av[i]);
		if (gb[i].copy == 0)
		{
			free(gb);
			return (NULL);
		}
		i++;
	}
	gb[i].str = 0;
	return (gb);
}
/*
int	main(int argc, char *argv[])
{
	if (argc < 2)
		return (0);
	t_stock_str *tab;
	tab = ft_strs_to_tab(argc, argv);
	ft_show_tab(tab);
}
*/
