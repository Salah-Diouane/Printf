/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:55:48 by sdiouane          #+#    #+#             */
/*   Updated: 2023/11/19 20:57:59 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	lst;
	int		i;
	int		cmp;

	va_start(lst, s);
	cmp = 0;
	i = 0;
	if (write(1, "", 0) < 0)
		return (-1);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
		{
			cmp += ft_format(s[++i], lst, cmp);
		}
		else if (s[i] != '%')
			cmp += ft_putchar(s[i]);
		i++;
	}
	va_end(lst);
	return (cmp);
}

// #include <stdio.h>
// int main()
// {
// 	printf("|%|",-2003);
//     printf("\n");
// 	ft_printf("|%|",-2003);
// }
