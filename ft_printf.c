/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:18:20 by asaber            #+#    #+#             */
/*   Updated: 2022/10/29 23:41:51 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_printf(const char *cond, va_list ptr)
{
	int	count;

	count = 0;
	if (*cond == 'c')
		count += ft_print_putchar(va_arg (ptr, int));
	else if (*cond == 'd' || *cond == 'i')
		count += ft_print_putnbr(va_arg (ptr, int));
	else if (*cond == 's')
		ft_print_putstr(va_arg (ptr, char *), &count);
	else if (*cond == 'u')
		count += ft_print_putunbr(va_arg (ptr, unsigned int));
	else if (*cond == 'x' || *cond == 'X')
		count += ft_print_puthe(va_arg (ptr, unsigned int), *cond);
	else if (*cond == '%')
		count += ft_print_putchar('%');
	else if (*cond == 'p')
	{
		ft_print_putstr("0x", &count);
		count += ft_print_puthe(va_arg (ptr, size_t), 'x');
	}
	return (count);
}

int	ft_printf(const char *pt, ...)
{
	char	*arr;
	int		count;
	int		i;

	i = 0;
	count = 0;
	arr = (char *)pt;
	va_list (ptr);
	va_start (ptr, pt);
	while (arr[i])
	{
		if (arr[i] != '%')
			count += ft_print_putchar(arr[i]);
		else if (arr[i] == '%')
		{
			i += 1;
			count += check_printf(&arr[i], ptr);
		}
		i++;
	}
	va_end (ptr);
	return (count);
}
