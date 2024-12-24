/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:32:36 by nrey              #+#    #+#             */
/*   Updated: 2024/09/04 14:32:39 by nrey             ###   ########.fr       */
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
	if (min >= max)
		return (0);
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
