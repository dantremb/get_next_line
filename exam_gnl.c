#undef BUFFER_SIZE
#define BUFFER_SIZE 1

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char	*get_next_line(int fd)
{
	char	*buffer;
	size_t	len;
	int		i;

	i = 0;
	len = BUFFER_SIZE;
	buffer = malloc(10000);
	if (buffer == NULL)
		return (NULL);
	while (len > 0)
	{
		len = read(fd, buffer + i, BUFFER_SIZE);
		buffer[i + len] = '\0';
		if (buffer[i] == '\0' || buffer[i] == '\n')
			break ;
		i++;
	}
	if (buffer[0] == '\0')
	{
		free(buffer);
		return (NULL);
	}
	return (buffer);
}
