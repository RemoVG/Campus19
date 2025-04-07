/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-gas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:22:00 by rvan-gas          #+#    #+#             */
/*   Updated: 2025/02/07 21:26:48 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	first;
	int	second;
	int	third;

	first = '0';
	while (++first <= '7')
	{
		second = first + 1;
		while (++second <= '8')
		{
			third = second + 1;
			while (++third <= '9')
			{
				write (1, &first, 1);
				write (1, &second, 1);
				write (1, &third, 1);
				if (first != '7')
				{
					write (1, ",", 1);
					write (1, " ", 1);
				}	
			}
		}
	}
}
/*
int		main(void)
{
	ft_print_comb();
}
*/
