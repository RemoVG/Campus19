/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: revan-ga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:38:08 by revan-ga          #+#    #+#             */
/*   Updated: 2025/07/15 14:48:25 by revan-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*extract_line(char *buffer)
{
	int			i;
	int			j;
	char		*line;

	i = 0;
	if (!buffer || !*buffer)
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\n')
		i++;
	line = malloc(i + 1);
	if (!line)
		return (NULL);
	j = -1;
	while (i > ++j)
		line[j] = buffer[j];
	line[j] = '\0';
	return (line);
}

static char	*clean_buffer(char *buffer)
{
	int			i;
	int			j;
	char		*new_buffer;

	i = 0;
	j = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	i++;
	new_buffer = malloc (ft_strlen(buffer) - i + 1);
	if (!new_buffer)
		return (NULL);
	while (buffer[i])
		new_buffer[j++] = buffer[i++];
	new_buffer[j] = '\0';
	free(buffer);
	return (new_buffer);
}

static char	*read_and_store(int fd, char *buffer)
{
	char	*read_buffer;
	char	*temp;
	int		bytes;

	read_buffer = malloc(BUFFER_SIZE + 1);
	if (!read_buffer)
		return (NULL);
	bytes = 1;
	while (!ft_strchr(buffer, '\n') && bytes > 0)
	{
		bytes = read(fd, read_buffer, BUFFER_SIZE);
		if (bytes < 0)
		{
			free(read_buffer);
			return (NULL);
		}
		read_buffer[bytes] = '\0';
		temp = ft_strjoin(buffer, read_buffer);
		buffer = temp;
	}
	free(read_buffer);
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	buffer = read_and_store(fd, buffer);
	if (!buffer)
		return (NULL);
	line = extract_line(buffer);
	buffer = clean_buffer(buffer);
	return (line);
}
