/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 22:16:35 by sdiouane          #+#    #+#             */
/*   Updated: 2023/11/18 23:29:27 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n, int base, int type)
{
	int		cmp;
	char	*upper;
	char	*lower;

	lower = "0123456789abcdef";
	upper = "0123456789ABCDEF";
	if (n < 0)
	{
		write(1, "-", 1);
		return (ft_putnbr(-n, base, type) + 1);
	}
	else if (n < base)
	{
		if (type == 1)
			return (ft_putchar(lower[n]));
		else
			return (ft_putchar(upper[n]));
	}
	else
	{
		cmp = ft_putnbr(n / base, base, type);
		return (cmp + ft_putnbr(n % base, base, type));
	}
}
