/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_puthe.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:55:54 by asaber            #+#    #+#             */
/*   Updated: 2022/10/29 23:43:08 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_puthe(size_t nb, char cond)
{
	char	*hexa;
	char	put[20];
	int		j;
	int		p;
	int		re;

	if (cond == 'x')
		hexa = "0123456789abcdef";
	else
		hexa = "0123456789ABCDEF";
	j = 0;
	while (1)
	{
		p = nb % 16;
		put[j] = hexa[p];
		nb /= 16;
		j++;
		if (nb == 0)
			break ;
	}
	re = j;
	while (j--)
		write(1, &put[j], 1);
	return (re);
}
