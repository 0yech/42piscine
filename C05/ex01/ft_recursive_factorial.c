/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:37:09 by nrey              #+#    #+#             */
/*   Updated: 2024/08/27 17:17:14 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	nt;
	int	i;

	nt = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb > 1)
	{
		nt *= nb * (ft_recursive_factorial(nb - i));
		i++;
	}
	return (nt);
}
