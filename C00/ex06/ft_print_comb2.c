/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 22:09:34 by nrey              #+#    #+#             */
/*   Updated: 2024/08/21 23:56:56 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	nv;

	if (nb >= 10)
	{
		nv = nb / 10;
		nb = nb % 10;
		ft_putchar(nv + 48);
		ft_putchar(nb + 48);
		return ;
	}
	if (nb < 10)
	{
		write(1, "0", 1);
		ft_putchar(nb + 48);
	}
}

void	ft_print_comb2(void)
{
	char	a[2];

	a[0] = 0;
	a[1] = 0;
	while (a[0] < 100)
	{
		a[1] = a[0] + 1;
		while (a[1] < 100)
		{
			ft_putnbr(a[0]);
			write(1, " ", 1);
			ft_putnbr(a[1]);
			a[1]++;
			if (a[0] < 98 || a[1] < 99)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
		}
		a[0]++;
	}
}
