/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:00:20 by gfantoni          #+#    #+#             */
/*   Updated: 2023/08/17 09:08:07 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_new_pre_line(char	*pre_line)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	while (pre_line[i] && pre_line[i] != '\n')
		i++;
	if (pre_line == NULL)
	{
		free(pre_line);
		return (NULL);
	}
	str = malloc(sizeof(char) * (ft_strlen(pre_line) - i + 1));
	if (str == NULL)
		return (NULL);
	i++;
	j = 0;
	while (pre_line[i])
		str[j++] = pre_line[i++];
	str[j] = '\0';
	free(pre_line);
	return (str);
}

char	*ft_get_line(char *pre_line)
{
	char	*str;
	int		i;

	i = 0;
	while (pre_line[i] && pre_line[i] != '\n')
		i++;
	str = malloc(sizeof(char) * (i + 2));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (pre_line[i] && pre_line[i] != '\n')
	{
		str[i] = pre_line[i];
		i++;
	}
	if (pre_line[i] == '\n')
	{
		str[i] = pre_line[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	ft_strlen(char *str)
{
	size_t	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *pre_line, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!pre_line)
	{
		pre_line = malloc(sizeof(char));
		pre_line[0] = '\0';
	}
	if (!pre_line || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(pre_line) + ft_strlen(buff)) + 1));
	if (!str)
		return (NULL);
	i = -1;
	j = 0;
	if (pre_line)
		while (pre_line[++i] != '\0')
			str[i] = pre_line[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(pre_line) + ft_strlen(buff)] = '\0';
	free(pre_line);
	return (str);
}

char	*ft_line_break(char *pre_line, char c)
{
	int	i;

	i = 0;
	if (pre_line == NULL)
		return (NULL);
	while (pre_line[i] != '\0')
	{
		if (pre_line[i] == c)
			return (&pre_line[i]);
		i++;
	}
	return (NULL);
}
