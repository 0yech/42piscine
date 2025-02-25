/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 23:02:11 by nrey              #+#    #+#             */
/*   Updated: 2024/08/29 17:23:34 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	st;
	int	nb;

	nb = 0;
	st = 1;
	i = 0;
	while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		|| (str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			st *= -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		nb = (nb * 10) + (str[i] - 48);
		i++;
	}
	return (nb * st);
}
