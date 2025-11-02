/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <wkrati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:01:59 by wkrati            #+#    #+#             */
/*   Updated: 2025/10/31 17:35:30 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);

void	ft_putchar(char c, int *i);
void	ft_putstr(const char *str, int *len);
void	ft_putnbr(long n, int *len);
void	ft_putunbr(unsigned int n, int *len);
void	ft_putnbr_base(unsigned long nb, char c, int *len);
void	ft_printf_address(void *ptr, int *len);

#endif
