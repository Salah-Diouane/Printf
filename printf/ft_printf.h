/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:15:30 by sdiouane          #+#    #+#             */
/*   Updated: 2023/11/19 09:38:00 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *s, ...);

int		ft_format(char sp, va_list ap, int count);

int		ft_putchar(char x);

int		ft_putstring(char *str);

int		ft_putnbr(long n, int base, int type);

int		ft_printadresse(unsigned long n);

#endif
