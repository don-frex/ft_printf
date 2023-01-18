/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 01:04:46 by asaber            #+#    #+#             */
/*   Updated: 2022/10/29 23:42:41 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<stdio.h>
# include <unistd.h>

int		ft_printf(const char *count, ...);
int		ft_print_putchar(int c);
int		ft_print_putnbr(int nb);
void	ft_print_putstr(char *str, int *count);
int		ft_print_putunbr(unsigned int nb);
int		ft_print_puthe(size_t nb, char cond);

#endif