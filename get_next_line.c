#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int	sz;
	char	*str;

	str = calloc(1000, sizeof(char));
	sz = read(fd, str, 1000);
	printf("size = %d\ncontent: %s\n", sz, str);
	return (0);
}
