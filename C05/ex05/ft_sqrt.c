/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 22:33:26 by nrey              #+#    #+#             */
/*   Updated: 2024/08/28 21:41:59 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	nt;
	int	count;
	int	ctx;

	count = 1;
	ctx = 0;
	if (nb == 1)
		return (1);
	while (count < nb)
	{
		nt = nb / count;
		ctx = nb % count;
		if (nt != nb || nt != 1)
		{
			if (ctx == 0 && count * count == nb)
				return (count);
		}
		count++;
	}
	return (0);
}
