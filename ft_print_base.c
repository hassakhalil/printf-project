/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhalil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 02:20:23 by hkhalil           #+#    #+#             */
/*   Updated: 2021/11/20 02:22:02 by hkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_base(int n, char *base, int size, int *l)
{
	unsigned long	nb;

	nb = n;
	if (nb >= (unsigned long)size)
		ft_print_base((nb / size), base, size, l);
	ft_putchar(base[nb % size], l);
}
