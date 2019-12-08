/*
** EPITECH PROJECT, 2018
** minshell
** File description:
** tab
*/

#include "my.h"
#include <stdio.h>

int	my_strlen(char *str)
{
	int	i = 0;

	while (str[i] != '\0') {
		i++;
	}
	return (i);
}

int	is_num_or_dot(char c)
{
	if ((c >= '0' && c <= '9') || c == '.')
		return (1);
	return (0);
}

int	count_word(const char *str, char c)
{
	int	len = 0;
	int	words = 1;

	if (str == NULL)
		return (0);
	while (str[len] != '\0') {
		if (str[len] == c)
			words += 1;
		len += 1;
	}
	return (words + 1);
}

int	count_letter(const char *str)
{
	int	len = 0;

	if (str == NULL)
		return (0);
	while (str[len] != '\0' && str[len] != ':')
		len += 1;
	return (len);
}

char	**my_str_to_tab(char *str)
{
	char	**tab = NULL;
	int	i = 0, y = 0, x = 0;

	tab = malloc(sizeof(char **) * my_strlen(str) + 1);
	tab[y] = malloc(sizeof(char *) * my_strlen(str) +1);
	while (str[i] != 0) {
		if (str[i] != ':') {
			tab[y][x] = str[i];
			x++;
			i++;
			tab[y][x] = 0;
		} else {
			i++;
			y++;
			tab[y] = malloc(sizeof(char *) * my_strlen(str) +1);
			x = 0;
		}
	}
	tab[y+1] = NULL;
	return (tab);
}
