/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:09:06 by nrey              #+#    #+#             */
/*   Updated: 2024/08/23 00:37:04 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(char a, char b, char c)
{	
	char	f;	
	char	g;	

	f = ' ';
	g = ',';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a < 55 || b < 56 || c < 57)
	{
		write(1, &g, 1);
		write(1, &f, 1);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a < 56)
	{
		b = a + 1;
		while (b < 57)
		{
			c = b + 1;
			while (c < 58)
			{
				ft_putnbr(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
