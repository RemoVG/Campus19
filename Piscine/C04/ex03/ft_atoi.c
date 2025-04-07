/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-gas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:49:31 by rvan-gas          #+#    #+#             */
/*   Updated: 2024/09/17 14:55:01 by rvan-gas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	total;
	int	is_negative;

	total = 0;
	is_negative = 1;
	while (*str == ' ' || *str == '\n' || *str == '\r' \
			|| *str == '\f' || *str == '\t' || *str == '\v' || *str == '+')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_negative *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{	
		total *= 10;
		total += (*str - 48);
		str++;
	}
	return (total * is_negative);
}
