/*
** EPITECH PROJECT, 2017
** my_rev_list
** File description:
** reverse a list order
*/

#include "mylist.h"

int	my_rev_list(linked_list_t **begin)
{
	linked_list_t *list;
	linked_list_t *temp;
	linked_list_t *next_elem;

	list = *begin;
	temp = NULL;
	while(list->next) {
		next_elem = list->next;
		list->next = temp;
		temp = list;
		list = next_elem;
	}
	list->next = temp;
	*begin = list;
	return (0);
}
