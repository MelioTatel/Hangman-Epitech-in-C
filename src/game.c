/*
** EPITECH PROJECT, 2018
** game of the hangman
** File description:
** find the word
*/

#include "../include/hangman.h"

int	get_y(char **tab)
{
	int	i = 0;

	while (tab[i] != NULL) {
		i = i + 1;
	}
	return (i - 1);
}

char 	*my_memset(char *str, int n)
{
	int	i = 0;

	while (i != n) {
		str[i] = '*';
		i = i + 1;
	}
	str[i] = '\0';
	return (str);
}

int	setup(char **dict, int tries)
{
	int	i = 0;
	int	r = 0;
	int	n = 0;
	char	*play;

	i = get_y(dict);
	r = rand() % i;
	n = my_strlen(dict[r]) + 1;
	play = malloc(sizeof(char) * n);
	play = my_memset(play, n - 1);
	hangman(dict[r], play, tries);
	free(play);
	return (0);
}

int	game(char *files, int tries)
{
	int	ope;
	char	*str;
	char	**dict;

	srand(time(0));
	str = malloc(1000);
	ope = open(files, O_RDONLY);
	read(ope, str, 1000);
	dict = my_str_to_wordtab(str, '\n');
	free(str);
	setup(dict, tries);
	free(dict);
	return (0);
}
