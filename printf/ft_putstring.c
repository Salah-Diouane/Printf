/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 22:13:54 by sdiouane          #+#    #+#             */
/*   Updated: 2023/11/18 22:59:47 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstring(char *s)
{
	int	i;
	int	cmp;

	i = 0;
	cmp = 0;
	if (!s)
	{
		cmp += write(1, "(null)", 6);
		if (cmp < 0)
			return (-1);
		return (cmp);
	}
	while (s[i])
	{
		cmp += write(1, &s[i], 1);
		if (cmp < 0)
			return (-1);
		i++;
	}
	return (cmp);
}
