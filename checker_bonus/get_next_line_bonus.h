/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaya <anbaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:00:09 by anbaya            #+#    #+#             */
/*   Updated: 2025/02/18 00:22:55 by anbaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include "push_swap_bonus.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*ft_strchr(const char *s, int c);
char	*ft_substr(char const *s, int start, int len);
int		ft_strlcpy(char *dest, const char *src, int size);
int		ft_strlcat(char *dest, const char *src, int size);
char	*get_next_line(int fd);
#endif
