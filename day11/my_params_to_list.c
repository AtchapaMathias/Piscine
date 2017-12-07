/*
** EPITECH PROJECT, 2017
** my_params_to_list
** File description:
** from arguments to linked list
*/

#include "mylist.h"

linked_list_t	*add_to_list(void *data, linked_list_t *list)
{
	linked_list_t *new_list;

	new_list = malloc(sizeof(linked_list_t));
	new_list->data = data;
	new_list->next = list;
	return (new_list);
}

linked_list_t	*my_params_to_list(int ac, char const * const *av)
{
	linked_list_t *list;
	int i;

	i = 0;
	list = NULL;
	while(i < ac) {
		list = add_to_list(av[i], list);
		i++;
	}
	return (list);
}
