/*
** EPITECH PROJECT, 2017
** algo
** File description:
** algorithm creating a tree
*/

void	create_tree(char *nb)
{
	int i;

	i = 1;
	while (i <= my_getnbr(nb))
		create_feuilles(i++);
	create_trunc(nb);
}

void	create_feuilles(int nb)
{
}

void	create_trunc(char *nb)
{
	int i;
	int j;

	j = 0;
	while (j < my_getnbr(nb)) {
		for (i = 0; i < my_getnbr(nb); i++)
			write(1, "|", 1);
		write(1, "\n", 1);
		j++;
	}
}

int main(int ac, char **av)
{
	if (ac != 2)
		return (84);
	create_tree(av[1]);
	return (0);
}
