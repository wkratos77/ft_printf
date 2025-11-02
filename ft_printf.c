/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <wkrati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 22:38:33 by wkrati            #+#    #+#             */
/*   Updated: 2025/10/31 17:52:20 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_check(char c, va_list args, int *i)
{
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), i);
	else if (c == 'c')
		ft_putchar(va_arg(args, int), i);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), i);
	else if (c == 'x' || c == 'X')
		ft_putnbr_base((unsigned long)va_arg(args, unsigned int), c, i);
	else if (c == 'p')
		ft_printf_address(va_arg(args, void *), i);
	else if (c == 'u')
		ft_putunbr(va_arg(args, unsigned int), i);
	else if (c != '\0')
		ft_putchar(c, i);
	else
		ft_putchar('%', i);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_check(*format, args, &len);
		}
		else
			ft_putchar(*format, &len);
		format++;
	}
	va_end(args);
	return (len);
}
