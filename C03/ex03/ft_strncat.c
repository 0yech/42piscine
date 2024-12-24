/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:13:08 by nrey              #+#    #+#             */
/*   Updated: 2024/08/25 15:45:40 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char*src, unsigned int nb)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (dest[count])
	{
		count++;
	}
	while (src[i] && i <= nb)
	{
		if (i == nb)
		{
			dest[count + i] = 0;
		}
		else
			dest[count + i] = src[i];
	i++;
	}
	dest[count + i] = 0;
	return (dest);
}
