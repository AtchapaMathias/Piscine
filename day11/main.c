#include "mylist.h"

int main(int ac, char **av)
{
	int (*cmp)();
	linked_list_t *list = my_params_to_list(ac, av);

	cmp = &my_strcmp;
	printf("%i\n", my_list_size(list));
	my_delete_nodes(&list, "lala", cmp);
	printf("%i\n", my_list_size(list));
	return (0);
}
