/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nroussy <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:24:59 by nroussy           #+#    #+#             */
/*   Updated: 2024/09/01 23:17:26 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

/* rush01.c */

void	ft_fill_last_case(char value[4][4][5]);

void	ft_rm_value(char value[4][4][5], int x, int y);

/* only_OPL.c */

void	ft_only_one_possibility_per_line(char value[4][4][5]);

void	ft_only_opl_p2(char value[4][4][5], int y, int z, char n);

void	ft_only_opl_p3(char value[4][4][5], int y, int z, char n);

void	ft_only_opl_p4(char value[4][4][5], int y, int z, char n);

void	ft_only_opl_p5(char value[4][4][5], int y, int z, char n);

/* only_OPC.c */

void	ft_only_one_possibility_per_col(char value[4][4][5]);

void	ft_only_opc_p2(char value[4][4][5], int x, int z, char n);

void	ft_only_opc_p3(char value[4][4][5], int x, int z, char n);

void	ft_only_opc_p4(char value[4][4][5], int x, int z, char n);

void	ft_only_opc_p5(char value[4][4][5], int x, int z, char n);

/* checks1.c */

int		ft_initialize_and_test_data(char *data, char *argv);

void	ft_initialize_value(char value[4][4][5]);

void	ft_first_check(char value[4][4][5], char *data);

void	ft_while_check(char value[4][4][5]);

/* checks2.c */

void	ft_puttab(char tab[4][4][5]);

void	ft_remove_others(char value[4][4][5], int x, int y, int f);

void	ft_check_if_others(char value[4][4][5]);

/* check_data_egal1.c */

void	ft_check_data_egal_1(char value[4][4][5], char *data);

void	ft_check_data_egal1_p2(char value[4][4][5], char *data, int i);

/* check_data_egal3.c */

void	ft_check_data_egal_3(char value[4][4][5], char *data);

void	ft_check_data_egal_3_p2(char value[4][4][5], int i);

/* check_data_egal4.c */

void	ft_check_data_egal_4(char value[4][4][5], char *data);

void	ft_check_data_egal_4_p2(char value[4][4][5], int i);

#endif