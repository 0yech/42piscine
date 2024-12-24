# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrey <marvin@42lausanne.ch>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/08 22:15:38 by nrey              #+#    #+#              #
#    Updated: 2024/09/08 22:20:15 by nrey             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

cc -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rcs libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
