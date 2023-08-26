/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 09:32:46 by gfantoni          #+#    #+#             */
/*   Updated: 2023/08/26 17:07:36 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdlib.h>

char		*get_next_line(int fd);
char		*ft_readed_line(char *start);
char		*ft_move_start(char *start);
char		*ft_strchr(char *s, int c);
char		*ft_strjoin(char *start, char *buff);
char		*ft_join(char *dest, char *s1, char *s2);
size_t		ft_strlen(char *str);
char		*ft_get_line(int fd, char *tmp, char **start_str);

#endif
