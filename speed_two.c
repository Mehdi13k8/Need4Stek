/*
** EPITECH PROJECT, 2018
** az
** File description:
** azea
*/

#include "my.h"

void	speed_six(char *str, int axe, float total, stok *r)
{
	if (axe >= 200 && axe <= 399) {
		my_putstr("car_forward:0.1\n");
		str = get_next_line(0);
		if (finish2(str) == -1)
			r->end = 1;
		total < 0 ? my_putstr("wheels_dir:-0.4\n")
			: my_putstr("wheels_dir:0.4\n");
	}
}

void	speed_seven(char *str, int axe, float total, stok *r)
{
	if (axe >= 0 && axe <= 199) {
		my_putstr("car_forward:0.08\n");
		str = get_next_line(0);
		if (finish2(str) == -1)
			r->end = 1;
		total < 0 ? my_putstr("wheels_dir:-0.7\n")
		: my_putstr("wheels_dir:0.7\n");
	}
}
