/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: revan-ga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:12:29 by revan-ga          #+#    #+#             */
/*   Updated: 2025/05/09 14:33:18 by revan-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)s);
		i++;
	}
	if (s[i] == char c)
		return ((char *)s);
	return (NULL);
}

char	*ft_strdup(const char *str)
{
}

char	*ft_substr(char *str, unsigned int start, size_t len)
{
}

char	*ft_strjoin(char *s1, char *s2)
{
}
