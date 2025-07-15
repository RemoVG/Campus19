/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: revan-ga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 10:47:52 by revan-ga          #+#    #+#             */
/*   Updated: 2025/05/26 12:40:41 by revan-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_spec(va_list ap, char c);
int	ft_printf(const char *format, ...);
int	ft_putvoid(void *ptr);
int	ft_putchar(char c);
int	ft_puthex(unsigned int nb, char format);
int	ft_putnbr(int nb);
int	ft_putstr(const char *str);
int	ft_putunbr(unsigned int nb);

#endif
