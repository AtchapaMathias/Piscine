/*
** EPITECH PROJECT, 2017
** my_map
** File description:
** 
*/

#include "mylist.h"

int	my_map(linked_list_t *begin, int (*f)(void *))
{
	while (begin != NULL) {
		f(begin->data);
		begin = begin->next;
	}
	return (0);
}
