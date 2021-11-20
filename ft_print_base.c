/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhalil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 03:34:02 by hkhalil           #+#    #+#             */
/*   Updated: 2021/11/20 04:18:50 by hkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_base(unsigned long nb, char *base, int size, int *l)
{
	//unsigned int	nb;

	//nb = n;
	if (nb >= (unsigned long)size)
		ft_print_base((nb / size), base, size, l);
	ft_putchar(base[nb % size], l);
}
