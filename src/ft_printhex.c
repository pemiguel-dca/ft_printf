/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:45:43 by pemiguel          #+#    #+#             */
/*   Updated: 2022/11/22 20:20:09 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	do_len(size_t n)
{
	int	len;

	len = 1;
	while (n > 15)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

int	do_hex(size_t n, char c)
{
	int	len;

	len = do_len(n);
	if (n > 15)
	{
		do_hex(n / 16, c);
		do_hex(n % 16, c);
	}
	else
	{
		if (c == 'x')
			ft_putchar(BASE_LOWER[n]);
		else
			ft_putchar(BASE_UPPER[n]);
	}
	return (len);
}
