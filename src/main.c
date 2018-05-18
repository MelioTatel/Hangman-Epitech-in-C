/*
** EPITECH PROJECT, 2018
** main
** File description:
** do the main
*/

#include "../include/hangman.h"

int	write_h(void)
{
	my_putstr("USAGE:\n");
	my_putstr("	./hangman file [tries]\n\n");
	my_putstr("DESCRIPTION:\n");
	my_putstr("	-file = filename description\n");
	my_putstr("	-tries = number of tries you have\n");
	return (0);
}

int	verif(char *num)
{
	if (checknumber(num) == 0)
		return (0);
	else {
		my_putstrer("tries must contains only number\n");
		return (84);
	}
}

int	verif2(char *file, int i)
{
	if (open(file, O_RDONLY) == -1) {
		my_putstrer("file not found\n");
		return (84);
	}
	if (open(file, O_RDONLY) != -1)
		return (game(file, i));
}

int	main(int ac, char **av)
{
	if (ac == 2) {
		if (my_strcmp(av[1], "-h") == 0)
			return (write_h());
		if (verif2(av[1], 10) == 0)
			return (0);
		else
			return (84);
	}
	if (ac == 3) {
		if (verif(av[2]) == 84)
			return (84);
		else
			return (verif2(av[1], my_getnbr(av[2])));
	}
}
