/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:29:08 by nrey              #+#    #+#             */
/*   Updated: 2024/09/12 20:55:02 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	strcomp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

char	**ft_sort_params(char **params, int argc)
{
	int i;
	int f;
	char *w;

	i = 1;
	while (i < argc)
	{
		while (i < argc - 1)
		{
			f = strcomp(params[i], params[i + 1]);
			if (f > 0)
			{
				w = params[i + 1];
				params[i + 1] = params[i];
				params[i] = w;
			}	
			i++;
		}
	i = 1;
	argc--;
	}
	return (params);
}

int	main(int argc, char *argv[])
{
	char **list;
	int i;

	i = 1;
	if (argc < 2)
		return (0);
	list = ft_sort_params(argv, argc);
	while (i < argc)
	{
		ft_putstr(list[i]);
		i++;
	}
}
