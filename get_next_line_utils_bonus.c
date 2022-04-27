/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 09:14:40 by pirichar          #+#    #+#             */
/*   Updated: 2022/04/26 22:31:44 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strdup(const char *src)
{
	char	*tmp;

	tmp = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (tmp == NULL)
		return (0);
	ft_strlcpy(tmp, src, sizeof(char) * (ft_strlen(src) + 1));
	*(tmp + ft_strlen(src)) = '\0';
	return (tmp);
}

size_t	ft_strlen(const char *str)
	{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

char	*ft_strchr(const char *str, int nbr)
{
	int	i;
	int	len;

	if (!str)
		return (NULL);
	i = -1;
	len = ft_strlen(str);
	while (++i < len + 1)
		if (str[i] == (char)nbr)
			return ((char *)str + i);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		is;
	int		id;

	is = 0;
	id = 0;
	if (!s1)
		s1 = ft_strdup("\0");
	tmp = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (tmp == NULL)
		return (NULL);
	while (s1[is] != '\0')
	{
		tmp[is] = s1[is];
		is++;
	}
	while (s2[id] != '\0')
	{
		tmp[is] = s2[id];
		is++;
		id++;
	}
	tmp[is] = '\0';
	free ((void *)s1);
	return (tmp);
}
