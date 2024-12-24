/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nroussy <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:24:59 by nroussy           #+#    #+#             */
/*   Updated: 2024/09/01 19:52:49 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_check_data_egal_3(char value[4][4][5], char *data)
{
	int	i;

	i = 0;
	while (data[i] != '\0')
	{
		if (data[i] == '3')
		{
			if (i < 4)
			{
				value[i][0][3] = '0';
				value[i][0][4] = '0';
			}
			ft_check_data_egal_3_p2(value, i);
		}
		i++;
	}
}

void	ft_check_data_egal_3_p2(char value[4][4][5], int i)
{
	if (i >= 4 && i < 8)
	{
		value[i - 4][3][3] = '0';
		value[i - 4][3][4] = '0';
	}
	if (i >= 8 && i < 12)
	{
		value[0][i - 8][3] = '0';
		value[0][i - 8][4] = '0';
	}
	if (i >= 12)
	{
		value[3][i - 12][3] = '0';
		value[3][i - 12][4] = '0';
	}
}
