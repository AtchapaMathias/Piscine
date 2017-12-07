/*
** EPITECH PROJECT, 2017
** my_delete_nodes
** File description:
** delete nodes from a linked list
*/

#include "mylist.h"

int	my_delete_nodes(linked_list_t **begin, void const *data_ref, int (*cmp)())
{
	linked_list_t *temp = *begin;

	while (temp != NULL) {
		if (temp != NULL && cmp(temp->data, data_ref) == 0) {
			*begin = temp->next;
		}
		temp = temp->next;
	}
	return (0);
}
