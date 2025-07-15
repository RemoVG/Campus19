/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: revan-ga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:12:29 by revan-ga          #+#    #+#             */
/*   Updated: 2025/07/15 14:45:48 by revan-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*joined;
	char	*start;
	int		i;

	i = 0;
	if (!s1)
	{
		s1 = malloc(1);
		if (!s1)
			return (free(s1), NULL);
		s1[0] = '\0';
	}
	if (!s2)
		return (NULL);
	joined = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	start = joined;
	if (!joined)
		return (NULL);
	while (s1[i])
		*joined++ = s1[i++];
	i = 0;
	while (s2[i])
		*joined++ = s2[i++];
	*joined = '\0';
	return (free(s1), start);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ('\0' == (char)c)
		return ((char *)s);
	return (NULL);
}
