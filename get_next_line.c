/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 20:37:41 by gfantoni          #+#    #+#             */
/*   Updated: 2023/08/17 09:08:11 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_get_buff(int fd, char *pre_line)
{
	char	*buff;
	int		bytes;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	bytes = 1;
	while (!ft_line_break(pre_line, '\n') && bytes != 0)
	{
		bytes = read(fd, buff, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[bytes] = '\0';
		pre_line = ft_strjoin(pre_line, buff);
	}
	free(buff);
	return (pre_line);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*pre_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	pre_line = ft_get_buff(fd, pre_line);
	if (pre_line == NULL)
		return (NULL);
	line = ft_get_line(pre_line);
	pre_line = ft_new_pre_line(pre_line);
	return (line);
}
