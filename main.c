/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:05:00 by root              #+#    #+#             */
/*   Updated: 2022/05/18 01:11:52 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/get_next_line.h"

int	main(void)
{
	char	*line;
	int		fd;
	int		i;

	i = 0;
	fd = open("text", O_RDONLY);
	while (i <= 9)
	{
		line = get_next_line(fd);
		printf("\n\033[0;32mMAIN=%s\033[0;37m", line);
		i++;
	}
	printf("\n");
}
