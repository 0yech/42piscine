/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:54:23 by nrey              #+#    #+#             */
/*   Updated: 2024/08/28 21:40:59 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 3)
		return (3);
	i = 3;
	if (nb < 2)
		return (2);
	if (!nb % 2)
		nb++;
	while (nb % i)
	{
		i += 2;
		if (nb == i)
			return (nb);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb == 2)
		return (3);
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}
