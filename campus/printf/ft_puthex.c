/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: revan-ga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:19:29 by revan-ga          #+#    #+#             */
/*   Updated: 2025/05/09 12:32:04 by revan-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nb, char format)
{
	int		i;
	int		base_len;
	char	*base;

	i = 0;
	base_len = 16;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nb >= (unsigned long) base_len)
		i += ft_puthex(nb / 16, format);
	i += ft_putchar(base [nb % 16]);
	return (i);
}
