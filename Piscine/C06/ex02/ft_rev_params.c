/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-gas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:21:44 by rvan-gas          #+#    #+#             */
/*   Updated: 2025/03/13 10:17:13 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write (1, &str++, 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	while (++i < ac)
	{
		ft_putstr(av[ac - i]);
		write (1, "\n", 1);
	}
	return (0);
}
