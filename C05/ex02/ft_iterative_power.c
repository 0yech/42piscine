/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:01:01 by nrey              #+#    #+#             */
/*   Updated: 2024/08/27 17:18:49 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	nt;
	int	ct;

	ct = 0;
	nt = 1;
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	while (ct < power)
	{
		nt = nt * nb;
		ct++;
	}
	return (nt);
}
