/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nroussy <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:24:59 by nroussy           #+#    #+#             */
/*   Updated: 2024/09/01 19:53:40 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_check_data_egal_4(char value[4][4][5], char *data)
{
	int	i;

	i = 0;
	while (data[i] != '\0')
	{
		if (data[i] == '4')
		{
			if (i < 4)
			{
				value[i][0][0] = '1';
				value[i][1][0] = '2';
				value[i][2][0] = '3';
				value[i][3][0] = '4';
			}
			ft_check_data_egal_4_p2(value, i);
		}
		i++;
	}
}

void	ft_check_data_egal_4_p2(char value[4][4][5], int i)
{
	if (i >= 4 && i < 8)
	{
		value[i - 4][3][0] = '1';
		value[i - 4][2][0] = '2';
		value[i - 4][1][0] = '3';
		value[i - 4][0][0] = '4';
	}
	if (i >= 8 && i < 12)
	{
		value[0][i - 8][0] = '1';
		value[1][i - 8][0] = '2';
		value[2][i - 8][0] = '3';
		value[3][i - 8][0] = '4';
	}
	if (i >= 12)
	{
		value[3][i - 12][0] = '1';
		value[2][i - 12][0] = '2';
		value[1][i - 12][0] = '3';
		value[0][i - 12][0] = '4';
	}
}
