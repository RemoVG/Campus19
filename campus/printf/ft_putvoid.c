/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: revan-ga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:32:08 by revan-ga          #+#    #+#             */
/*   Updated: 2025/07/08 10:59:08 by REVAN-GA         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_nbr_base(unsigned long nb, char *base)
{
	int		i;
	char	base_len;

	i = 0;
	base_len = 16;
	if (nb >= (unsigned long)base_len)
		i += ft_put_nbr_base(nb / base_len, base);
	i += ft_putchar(base[nb % base_len]);
	return (i);
}

int	ft_putvoid(void *ptr)
{
	int	i;

	i = 0;
	if (!ptr)
	{
		i += ft_putstr("(nil)");
		return (i);
	}
	i += write(1, "0x", 2);
	i += ft_put_nbr_base((unsigned long)ptr, "0123456789abcdef");
	return (i);
}
