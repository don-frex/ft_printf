/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_putstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 00:46:17 by asaber            #+#    #+#             */
/*   Updated: 2022/10/29 23:42:27 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_putstr(char *str, int *count)
{
	if (str)
	{
		while (*str)
		{
			*count += ft_print_putchar(*str);
			str++;
		}
	}
	else
	{
		write(1, "(null)", 6);
		*count += 6;
	}
}
