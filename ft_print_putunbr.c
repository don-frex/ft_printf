/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_putunbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:32:49 by asaber            #+#    #+#             */
/*   Updated: 2022/10/29 23:42:51 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	lenu(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		i += 1;
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

int	ft_print_putunbr(unsigned int nb)
{
	int	n;
	int	i;

	i = lenu(nb);
	if (nb < 10)
	{
		n = (nb % 10) + 48;
		ft_print_putchar(n);
	}
	else
	{
		ft_print_putunbr(nb / 10);
		ft_print_putunbr(nb % 10);
	}
	return (i);
}
