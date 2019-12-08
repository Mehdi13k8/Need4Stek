/*
** EPITECH PROJECT, 2018
** main
** File description:
** 4steal
*/

#include "my.h"
#include <string.h>

int	coll_klk(char *str)
{
	int i = 0;
	int i2 = 0;

	while (i2 != 3 && str[i] != '\0') {
		if (str[i] == ':')
			i2 += 1;
		i += 1;
	}
	return (i);
}

char	*check(char *str)
{
	int   a = 0;
	int   b = coll_klk(str);
	char  *tmp = malloc(sizeof(char *) * 1000);

	while (str[b] != 0) {
		if ((str[b] >= '0' && str[b] <= '9') ||
		str[b] == '.' || str[b] == ':') {
			tmp[a] = str[b];
			a++;
		}
		b++;
	}
	tmp[a - 1] = '\0';
	return (tmp);
}

int	ko_is(char *s)
{
	char *str = s;
	int i = 0;

	while (str[i] != ':')
		&*str++;
	if (strncmp(str, "KO", 2) == 0)
		return (2);
	return (0);
}

void	lidar_is_blind(char *s, stok stock, char **tab, float axe)
{
	while (42) {
		my_putstr("GET_INFO_LIDAR\n");
		s = get_next_line(0);
		if (finish(s) == -1) {
			fprintf(stderr, "%s", "finished");
			stock.end = 1;
		}
		s = check(s);
		if (ko_is(s) == 1)
			break;
		tab = my_str_to_tab(s);
		axe = atof(tab[15]);
		if (fast_and_or_or_furiously_furious(axe, atof(tab[0]) -
		atof(tab[31]), &stock) == 1)
			break;
		if (stock.end == 1)
			break;
	}
}

int	main(void)
{
	char *s;
	stok stock;
	char **tab = NULL;
	float axe;

	my_putstr("START_SIMULATION\n");
	s = get_next_line(0);
	lidar_is_blind(s, stock, tab, axe);
	free(s);
	my_putstr("STOP_SIMULATION\n");
	return (0);
}
