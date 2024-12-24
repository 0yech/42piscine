/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:19:50 by nrey              #+#    #+#             */
/*   Updated: 2024/09/06 14:55:34 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*c;
	int		i;

	i = 0;
	c = malloc(sizeof(src));
	if (c == NULL)
		return (0);
	while (src[i])
	{
		c[i] = src[i];
		i++;
	}
	c[i] = 0;
	return (c);
}
int	main(void)
{
	char f[] = "yipi";

	ft_strdup(f);
}
