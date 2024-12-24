/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 19:49:44 by nrey              #+#    #+#             */
/*   Updated: 2024/08/24 20:29:54 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	check;

	a = 0;
	while (str[a] != '\0')
	{
		if ('a' <= str[a - 1] && str[a - 1] <= 'z')
			check = 1;
		else if ('0' <= str[a - 1] && str[a - 1] <= '9')
			check = 1;
		else if ('A' <= str[a - 1] && str[a - 1] <= 'Z')
			check = 1;
		else
			check = 0;
		if ('A' <= str[a] && str[a] <= 'Z' && check == 1)
			str[a] = str[a] + 32;
		if ('a' <= str[a] && str[a] <= 'z' && check == 0)
			str[a] = str[a] - 32;
		a++;
	}
	return (str);
}
