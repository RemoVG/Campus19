/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-gas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 18:58:33 by rvan-gas          #+#    #+#             */
/*   Updated: 2024/09/04 19:34:22 by rvan-gas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	positive;
	char	negative;

	positive = 'P';
	negative = 'N';
	if (n >= 0)
		write(1, &positive, 1);
	else
		write(1, &negative, 1);
}
/*
int	main(void)
{
	ft_is_negative(-5);
	ft_is_negative(-0);
	ft_is_negative(3);
	ft_is_negative(2);
	ft_is_negative(-2);
	return (0);
}
*/
