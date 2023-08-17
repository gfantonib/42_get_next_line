/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:00:14 by gfantoni          #+#    #+#             */
/*   Updated: 2023/08/17 09:08:09 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

char		*get_next_line(int fd);
char		*ft_get_buff(int fd, char *pre_line);
char		*ft_line_break(char *pre_line, char c);
char		*ft_strjoin(char *pre_line, char *buff);
char		*ft_get_line(char *pre_line);
char		*ft_new_pre_line(char	*pre_line);
int			ft_strlen(char *str);

#endif
