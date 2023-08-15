#include "get_next_line.h"

int	main(void)
{
	int	fd;
	char	*result;

	fd = open("melvin.txt", O_RDONLY);
	result = get_next_line(fd);
	printf("%s\n", result);
	return (0);
}
