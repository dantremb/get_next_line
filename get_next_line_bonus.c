/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 09:17:02 by pirichar          #+#    #+#             */
/*   Updated: 2022/04/26 23:14:18 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char		*box[4096];
	char			*ret;

	if (BUFFER_SIZE < 1 || fd < 0)
		return (0);
	box[fd] = read_fd(fd, box[fd]);
	if (!box[fd])
		return (NULL);
	ret = trim_ret(box[fd]);
	box[fd] = trim_box_free(box[fd]);
	return (ret);
}

char	*read_fd(int fd, char *box)
{
	char	*tmp;
	int		len;

	tmp = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!tmp)
		return (NULL);
	len = 1;
	while (ft_strchr(box, '\n') == NULL && len != 0)
	{
		len = read(fd, tmp, BUFFER_SIZE);
		if (len < 0)
		{
			free(tmp);
			return (NULL);
		}
		tmp[len] = '\0';
		box = ft_strjoin(box, tmp);
	}
	free (tmp);
	return (box);
}

char	*trim_ret(char *box)
{
	char	*ret;

	if (!box[0])
		return (NULL);
	if (ft_strchr(box, '\n') == NULL)
		ret = ft_strdup(box);
	else
		ret = ft_substr(box, 0, ft_strchr(box, '\n') - box + 1);
	return (ret);
}

char	*trim_box_free(char *box)
{
	char	*tmp;

	if (ft_strchr(box, '\n') == NULL)
	{
		free(box);
		return (NULL);
	}
	else
	{
		tmp = ft_substr(box, ft_strchr(box, '\n') - box + 1,
				ft_strlen(ft_strchr(box, '\n') + 1));
		free (box);
		return (tmp);
	}
}

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	size_t			i;
	size_t			slen;
	char			*tmp;

	if (!src || len == 0)
		return (NULL);
	slen = ft_strlen((char *)src);
	if (start > slen)
		return (ft_strdup(""));
	tmp = malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	i = -1;
	while (++i < len)
		tmp[i] = src[start + i];
	tmp[i] = '\0';
	return (tmp);
}
