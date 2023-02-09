/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:19:37 by pemiguel          #+#    #+#             */
/*   Updated: 2022/11/23 14:18:04 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	do_pointer(size_t pointer)
{
	int		len;

	if (pointer == 0)
	{
		ft_putstr("(nil)");
		return (5);
	}
	len = 0;
	ft_putstr("0x");
	len = do_hex(pointer, 'x');
	return (len + 2);
}
