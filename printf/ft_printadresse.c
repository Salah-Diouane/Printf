/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printadresse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 23:02:46 by sdiouane          #+#    #+#             */
/*   Updated: 2023/11/18 23:05:36 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printadresse(unsigned long n)
{
	char	*base16;
	int		cmp;

	cmp = 0;
	base16 = "0123456789abcdef";
	if (n < 16)
		return (ft_putchar(base16[n]));
	else
	{
		cmp = ft_printadresse(n / 16);
		return (cmp + ft_printadresse(n % 16));
	}
}
