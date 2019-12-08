/*
** EPITECH PROJECT, 2018
** fct
** File description:
** /
*/

#include "my.h"
#include <string.h>

int	fast_and_or_or_furiously_furious(float axe, float total, stok *r)
{
	int     i = 0;
	char    *str;

	speed_one(str, axe, total, r);
	speed_two(str, axe, total, r);
	speed_tree(str, axe, total, r);
	speed_four(str, axe, total, r);
	speed_five(str, axe, total, r);
	speed_six(str, axe, total, r);
	speed_seven(str, axe, total, r);
	str = get_next_line(0);
	fprintf(stderr, "%s\n",  str);
	if (finish2(str) == -1)
		r->end = 1;
}
