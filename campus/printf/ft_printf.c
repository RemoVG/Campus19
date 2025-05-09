/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: revan-ga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:48:20 by revan-ga          #+#    #+#             */
/*   Updated: 2025/05/09 12:43:50 by revan-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_spec(va_list ap, char c)
{
	int	count;

	count = 0;
	if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(ap, int));
	else if (c == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (c == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (c == 'x')
		count += ft_puthex(va_arg(ap, unsigned int), c);
	else if (c == 'X')
		count += ft_puthex(va_arg(ap, unsigned int), c);
	else if (c == 'p')
		count += ft_putvoid(va_arg(ap, void *));
	else if (c == 'u')
		count = ft_putunbr(va_arg(ap, unsigned int));
	else if (c == '%')
		return (ft_putchar('%'));
	else
	{
		count += ft_putchar('%');
		count += ft_putchar(c);
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, format);
	if (!format)
		return ('\0');
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
				break ;
			count += ft_spec(ap, format[i + 1]);
			i++;
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (count);
}
