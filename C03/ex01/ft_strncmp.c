/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 12:39:17 by nrey              #+#    #+#             */
/*   Updated: 2024/08/29 23:54:34 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	if (n <= 0)
	{
		return (0);
	}
	while (s1[a] && s2[a] && a <= n)
	{
		if (a == n)
		{
			return (0);
		}
		else
		{
			if (s1[a] != s2[a])
			{
				return (s1[a] - s2[a]);
			}
		a++;
		}
	}
	return (s1[a] - s2[a]);
}
