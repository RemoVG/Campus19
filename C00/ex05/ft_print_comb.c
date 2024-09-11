/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-gas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:22:00 by rvan-gas          #+#    #+#             */
/*   Updated: 2024/09/10 11:56:38 by rvan-gas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0' -1;
	while (++first <= '9')
	{
		second = first;
		while (++second <= '9')
		{
			third = second + 1;
			while (++third <= '9')
			{
				write (1, &first, 1);
				write (1, &second, 1);
				write (1, &third, 1);
				if (first != '7' || second != '8' || third != '9')
				{
					write (1, ",", 1);
					write (1, " ", 1);
				}
			}
		}
	}
}

int		main(void)
{
	ft_print_comb();
}
