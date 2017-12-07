/*
** EPITECH PROJECT, 2017
** my_find_node
** File description:
** find a node in a linked list
*/

#include "mylist.h"

linked_list_t	*my_find_node(linked_list_t const *begin, void const *data_ref, int (*cmp)())
{
	while (begin != NULL) {
		if (cmp(begin->data, data_ref) == 0)
			return (begin);
		begin = begin->next;
	}
	return (NULL);
}
