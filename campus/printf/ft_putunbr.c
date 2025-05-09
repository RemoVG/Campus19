/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: revan-ga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:54:09 by revan-ga          #+#    #+#             */
/*   Updated: 2025/05/08 16:29:22 by revan-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int nb)
{
	unsigned int	i;

	i = 0;
	if (nb > 9)
	{
		i += ft_putunbr(nb / 10);
		i += ft_putunbr(nb % 10);
	}
	else
		i += ft_putchar(nb + 48);
	return (i);
}
