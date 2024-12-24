/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:00:49 by nrey              #+#    #+#             */
/*   Updated: 2024/08/29 23:37:46 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if(to_find[0] == 0)
        return (str);
    while (str[i])
    {
        j = 0;
        while  (str[i] == to_find[j])
        {
            i++;
            j++;
            if (to_find[j] == 0)
                return (&str[i - j]);
        }
    i++;
    }
    return (0);
}
