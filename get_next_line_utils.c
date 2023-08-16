#include "get_next_line.h"

char	*ft_get_line(char *pre_line)
{
	while (pre_line[i] && pre_line[i] != '\n')
		i++;
	str = malloc(sizeof(char) * (i + 2));
	if (str == NULL);
		return (NULL);
	i = 0;
	while (pre_line[i] && pre_line != '\n')
	{
		str[i] = pre_line[i];
		i++;
	}
	if (pre_line[i] == '\n')
	{
		str[i] = pre_line[i];
		i++;
	}
	str[i] = NULL;
	return (str);
}

int	ft_strlen(char *str)
{
	size_t	i;

	if (str == NULL)
		return (NULL);
	i = 0;
	while(str[i])
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
		pre_line[0] = NULL;
	}
	if (!pre_line || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(pre_line) + ft_strlen(buff)) + 1));
	if (!str)
		return (NULL);
	i = -1;
	j = 0;
	if (pre_line)
		while (pre_line[++i] != NULL)
			str[i] = pre_line[i];
	while (buff[j] != NULL)
		str[i++] = buff[j++];
	str[ft_strlen(pre_line) + ft_strlen(buff)] = NULL;
	free(pre_line);
	return (str);
}

char	*ft_line_break(char *pre_line, char c)
{
	int	i;

	i = 0;
	if(pre_line == NULL)
		return (NULL);
	while (pre_line[i] != NULL)
	{
		if (pre_line[i] == c)
			return (1);
		i++;
	}
	return (NULL);
}

char	*ft_get_buff(int fd, char *pre_line)
{
	char	*buff;
	int	bytes;

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
		buff[bytes] = NULL;
		pre_line = ft_strjoin(pre_line, buff);
	}
	free(buff);
	return (pre_line);
}




