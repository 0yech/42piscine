/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:43:14 by nrey              #+#    #+#             */
/*   Updated: 2024/09/02 15:57:46 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	prt_str(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc != 0)
	{
		while (argv[i])
		{
			prt_str(argv[i]);
			i++;
			write(1, "\n", 1);
		}	
	}
}	
