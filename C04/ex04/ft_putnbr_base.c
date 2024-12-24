/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:49:19 by nrey              #+#    #+#             */
/*   Updated: 2024/09/12 15:09:39 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int	valid_base(char *str)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		if (str[i] >= 0 && str[i] <= 32)
			return (0);
		if (str[i] == 127)
			return (0);
		j = 0;0
		while (str[j])
		{
			if (i != j && str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
   return (1);	
}

void	ft_putnbr_base_rec(unsigned int nbr, char *base_s, unsigned int base_n)
{
	if (nbr >= base_n)
		ft_putnbr_base_rec(nbr / base_n, base_s, base_n);
	write(1, base_s + (nbr % base_n), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int 	baselen;
	unsigned int	nbr2;

	baselen = ft_strlen(base);
	if (!valid_base(base))
		return ;
	if(nbr < 0)
	{
		write(1, "-", 1);
		nbr2 = nbr * -1;
	}
	else
		nbr2 = nbr;
	ft_putnbr_base_rec(nbr2, base, baselen);
}
/*
int	main(int argc, char *argv[])
{
	int f;

	f = atoi(argv[1]);
	if (argc != 3)
	{
		write (1, "error", 5);
	}
	ft_putnbr_base(f, argv[2]);
	write(1, "\n", 1);
}*/
