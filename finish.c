/*
** EPITECH PROJECT, 2018
** aze
** File description:
** azea
*/

#include "my.h"
#include <string.h>

int	finish(char *str)
{
	int i = 0;
	int i2 = 0;
	int d_p = 0;
	char *str2 = malloc(sizeof(char) * 30);

	while (str[0] != '\0' && d_p != 35) {
		if (str[0] == ':')
			d_p++;
		i++;
		&*++str;
	}
	if (strncmp(str, "Track Cleared", 13) == 0)
		return (-1);
	return (0);
}

int	finish2(char *str)
{
	int i = 0;
	int i2 = 0;
	int d_p = 0;
	char *str2 = malloc(sizeof(char) * 30);

	while (str[0] != '\0' && d_p != 3) {
		if (str[0] == ':')
			d_p++;
		i++;
		&*++str;
	}
	if (strncmp(str, "Track Cleared", 13) == 0)
		return (-1);
	return (0);
}
