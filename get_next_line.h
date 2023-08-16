#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

char	*get_next_line(int fd);
char	*ft_get_buff(int fd, char *pre_line);
char	*ft_line_break(char *pre_line, char c);
char	*ft_strjoin(char *pre_line, char *buff);
int	ft_strlen(char *str);
char	*ft_get_line(char *pre_line);
char	*ft_new_pre_line(char	*pre_line);

#endif
