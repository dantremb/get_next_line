/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 09:13:52 by pirichar          #+#    #+#             */
/*   Updated: 2022/04/27 12:09:57 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*read_fd(int fd, char *box);
char	*trim_ret(char *box);
char	*trim_box_free(char *box);

char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_strchr(const char *str, int nbr);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *src, unsigned int start, size_t len);

#endif
