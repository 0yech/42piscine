/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:01:25 by nrey              #+#    #+#             */
/*   Updated: 2024/08/26 17:33:10 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char*src)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (dest[count])
	{
		count++;
	}
	while (src[i])
	{
		dest[count + i] = src[i];
		i++;
	}
	dest[count + i] = src[i];
	return (dest);
}
