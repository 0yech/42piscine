/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:27:23 by nrey              #+#    #+#             */
/*   Updated: 2024/09/04 14:27:28 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	diff;
	int	i;

	i = 0;
	diff = (max - min);
	a = malloc(diff * sizeof(int));
	if (a == 0)
		return (0);
	while (i < diff)
	{
		a[i] = min + i;
		i++;
	}
	return (a);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = ft_range(min, max);
	if (range == NULL)
		return (-1);
	return (max - min);
}
