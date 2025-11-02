/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <wkrati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 00:25:52 by wkrati            #+#    #+#             */
/*   Updated: 2025/10/31 17:52:27 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned long nb, char c, int *len)
{
	if (nb > 15)
		ft_putnbr_base(nb / 16, c, len);
	if (c == 'X')
		ft_putchar("0123456789ABCDEF"[nb % 16], len);
	else if (c == 'x')
		ft_putchar("0123456789abcdef"[nb % 16], len);
}
