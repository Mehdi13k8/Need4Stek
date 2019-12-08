/*
** EPITECH PROJECT, 2018
** az
** File description:
** az
*/

#include "my.h"

void	speed_one(char *str, int axe, float total, stok *r)
{
	if (axe >= 2000) {
		my_putstr("car_forward:1\n");
		str = get_next_line(0);
		if (finish2(str) == -1)
			r->end = 1;
		total < 0 ? my_putstr("wheels_dir:-0.005\n")
		: my_putstr("wheels_dir:0.005\n");
	}
}

void	speed_two(char *str, int axe, float total, stok *r)
{
	if (axe >= 1500 && axe <= 1999) {
		my_putstr("car_forward:0.9\n");
		str = get_next_line(0);
		if (finish2(str) == -1)
			r->end = 1;
		total < 0 ? my_putstr("wheels_dir:-0.008\n")
		: my_putstr("wheels_dir:0.008\n");
	}
}

void	speed_tree(char *str, int axe, float total, stok *r)
{
	if (axe >= 1000 && axe <= 1499) {
		my_putstr("car_forward:0.5\n");
		str = get_next_line(0);
		if (finish2(str) == -1)
			r->end = 1;
		total < 0 ? my_putstr("wheels_dir:-0.07\n")
		: my_putstr("wheels_dir:0.07\n");
	}
}

void	speed_four(char *str, int axe, float total, stok *r)
{
	if (axe >= 600 && axe <= 999) {
		my_putstr("car_forward:0.3\n");
		str = get_next_line(0);
		if (finish2(str) == -1)
			r->end = 1;
		total < 0 ? my_putstr("wheels_dir:-0.1\n")
		: my_putstr("wheels_dir:0.1\n");
	}
}

void	speed_five(char *str, int axe, float total, stok *r)
{
	if (axe >= 400 && axe <= 599) {
		my_putstr("car_forward:0.2\n");
		str = get_next_line(0);
		if (finish2(str) == -1)
			r->end = 1;
		total < 0 ? my_putstr("wheels_dir:-0.2\n")
		: my_putstr("wheels_dir:0.2\n");
	}
}
