#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static	char	*pre_line;
	char		*line;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	pre_line = ft_get_buff(fd, pre_line);
	if (pre_line == NULL)
		return (NULL);
	line = ft_get_line(pre_line);
	pre_line = ft_new_pre_line(pre_line);
	return (line);
}
