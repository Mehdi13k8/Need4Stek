/*
** EPITECH PROJECT, 2017
** paramlist
** File description:
** mehdi
*/

#include "my.h"

int	my_show_list(linked_list_t *list)
{
	int		i = 0;
	linked_list_t	*tmp;

	tmp = list;
	while (tmp != NULL) {
		my_printf("%f", tmp->data);
		my_putchar('\n');
		tmp = tmp->next;
		i = i + 1;
	}
	return (i);
}

linked_list_t	*my_put_in_list(linked_list_t *list, char **tab)
{
	linked_list_t *tmp;
	linked_list_t *new_elem;
	int i = 0;

	new_elem = malloc(sizeof(linked_list_t) * 1);
	new_elem->next = NULL;
	while (tab[i])
		i++;
	new_elem->data = malloc(sizeof(int) * i);
	i = -1;
	while (tab[++i])
		new_elem->data[i] = atof(tab[i]);
	if (list == NULL)
		return (new_elem);
	tmp = list;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_elem;
	return (list);
}
