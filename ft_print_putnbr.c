/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_putnbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 00:22:18 by asaber            #+#    #+#             */
/*   Updated: 2022/10/29 23:43:01 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len(int nb)
{
	int	i;

	i = 0;
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

int	ft_print_putnbr(int nb)
{
	long	b;
	int		i;

	b = nb;
	i = len(nb);
	if (nb == 0)
		i += 1;
	if (b < 0)
	{
		ft_print_putchar('-');
		b = -b;
		i++;
	}
	if (b >= 10)
	{
		ft_print_putnbr(b / 10);
		ft_print_putchar(b % 10 + 48);
	}
	if (b < 10)
	{
		ft_print_putchar(b % 10 + 48);
	}
	return (i);
}
