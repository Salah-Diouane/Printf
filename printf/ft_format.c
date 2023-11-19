/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 22:03:53 by sdiouane          #+#    #+#             */
/*   Updated: 2023/11/19 09:37:51 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char c, va_list lst, int cmp)
{
	if (c == 'c')
		cmp = ft_putchar(va_arg(lst, int));
	else if (c == 's')
		cmp = ft_putstring(va_arg(lst, char *));
	else if (c == 'd' || c == 'i')
		cmp = ft_putnbr(va_arg(lst, int), 10, 1);
	else if (c == 'x')
		cmp = ft_putnbr((unsigned int)va_arg(lst, int), 16, 1);
	else if (c == 'X')
		cmp = ft_putnbr((unsigned int)va_arg(lst, int), 16, 2);
	else if (c == 'p')
	{
		cmp = write(1, "0x", 2);
		cmp += ft_printadresse((unsigned long)va_arg(lst, void *));
	}
	else if (c == 'u')
		cmp = ft_putnbr((unsigned int)va_arg(lst, int), 10, 1);
	else if (c == '%')
		cmp = write(1, "%", 1);
	else
		write(1, &c, 1);
	return (cmp);
}
