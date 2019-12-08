/*
** EPITECH PROJECT, 2018
** azea
** File description:
** steal
*/

#ifndef MY_H
#define MY_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#define READ_SIZE (50)

typedef struct stack
{
	char **tab;
	int end;
}stok;

typedef struct ma_list
{
	float *data;
	struct ma_list	*next;
}linked_list_t;

int	my_show_list(linked_list_t *list);
//linked_list_t	*my_put_in_list(linked_list_t *list, char **tab);
int	main(void);
char	*get_next_line(const int fd);
int	my_printf(char *str, ...);
void	my_putstr(char *str);
void	my_putchar(char c);
void	my_putchar2(char c, int i);
int	my_strlen(char *str);
char	**my_str_to_tab(char *str);
void	flt_to_str(char *str, float a, int dt);
float	ma_atof(char *str);
void	recup(linked_list_t *data, char *str, stok *stack);
int	ending(char *str);
int	finish(char *str);
int	finish2(char *str);
int	fast_and_or_or_furiously_furious(float axe, float total, stok *r);
void	speed_one(char *str, int axe, float total, stok *r);
void	speed_two(char *str, int axe, float total, stok *r);
void	speed_tree(char *str, int axe, float total, stok *r);
void	speed_four(char *str, int axe, float total, stok *r);
void	speed_five(char *str, int axe, float total, stok *r);
void	speed_six(char *str, int axe, float total, stok *r);
void	speed_seven(char *str, int axe, float total, stok *r);

#endif //my_h
