/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:07:41 by nrey              #+#    #+#             */
/*   Updated: 2024/08/24 16:33:01 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	show_middleline(int x, int count, char b)
{
	char	f;

	f = ' ';
	if (x != 1)
	{
		ft_putchar(b);
		while (count < x)
		{
			ft_putchar(f);
			count++;
		}
		count = 2;
		ft_putchar(b);
	}
	else
	{
		ft_putchar(b);
	}
	write(1, "\n", 1);
}

void	prt_firstline(int x, int y, char a, char b)
{
	char	c;
	int		count;

	c = '\\';
	count = 2;
	if (x == 1 && y == 1)
	{
		ft_putchar(a);
		write(1, "\n", 1);
	}
	else
	{
		ft_putchar(a);
		while (count < x)
		{
			ft_putchar(b);
			count++;
		}
		if (x > 1)
		{
			ft_putchar(c);
		}
		write(1, "\n", 1);
	}
}

void	prt_lastline(int x, int y, char a, char b)
{
	char	c;
	int		count;

	c = '\\';
	count = 2;
	if (y == 1)
	{
		return ;
	}
	else
	{
		ft_putchar(c);
		while (count < x)
		{
			ft_putchar(b);
			count++;
		}
		if (x > 1)
		{
			ft_putchar(a);
		}
		write(1, "\n", 1);
	}
}

void	prt_middleline(int x, int y, int count, int county)
{
	char	b;

	b = '*';
	if (y <= 2)
	{
		return ;
	}
	else
	{
		while (county < y)
		{
			show_middleline(x, count, b);
			county++;
		}
	}	
}

void	rush(int x, int y)
{
	char	a;
	char	b;
	char	c;
	int		count;
	int		county;

	a = '/';
	b = '*';
	c = '\\';
	count = 2;
	county = 2;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	prt_firstline(x, y, a, b);
	prt_middleline(x, y, count, county);
	prt_lastline(x, y, a, b);
}
