/*
** EPITECH PROJECT, 2017
** gtxnextline
** File description:
** main
*/

# include "my.h"
# include <stdlib.h>

int	check_end_line(char *buffer)
{
	int     i = 0;

	while (buffer[i] != '\0') {
		if (buffer[i] == '\n')
			return (i + 1);
		i = i + 1;
	}
	return (-1);
}

char	*strcater(char *result, char *src)
{
	char            *cp;
	int             i = -1;
	int             j;

	while (result[++i] != '\0');
	if ((cp = malloc(sizeof(char) *
	(i + READ_SIZE + 1))) == NULL)
		return (NULL);
	i = -1;
	while (result[++i] != '\0')
		cp[i] = result[i];
	j = -1;
	while (src[++j] != '\0' && src[j] != '\n') {
		cp[i] = src[j];
		++i;
	}
	cp[i] = '\0';
	free(result);
	return (cp);
}

int	send_neg(char *buf, int *k, char **end, int idx)
{
	while (buf[*k] != '\0' && buf[*k] != '\n') {
		(*end)[idx] = buf[*k];
		*k = *k + 1;
		idx++;
	}
	(*end)[idx] = '\0';
	if (buf[*k] == '\n') {
		*k = *k + 1;
		return (1);
	}
	else
		return (0);
}

int	left_in(char *buf, int *k, char **end)
{
	int	idx = *k;
	int	len = 1;

	while (buf[idx] != '\n' && buf[idx] != '\0')
		idx++;
	len = len + idx - *k;
	if (((*end) = malloc(sizeof(char)
	* (len))) == NULL)
		return (-1);
	else
		idx = 0;
	return (send_neg(buf, k, end, idx));
}

char	*get_next_line(const int fd)
{
	static char     buffer[READ_SIZE + 1];
	static int      k = 0;
	char            *result;
	int             ret;

	if ((ret = left_in(buffer, &k, &result)) == -1)
		return (NULL);
	else if ((ret = left_in(buffer, &k, &result)) == 1)
		return (result);
	while ((ret = read(fd, buffer, READ_SIZE)) > 0) {
		buffer[ret] = '\0';
		result = strcater(result, buffer);
		if ((k = check_end_line(buffer)) != -1)
			return (result);
	}
	if (result[0] != '\0')
		return (result);
	free(result);
	return (NULL);
}
