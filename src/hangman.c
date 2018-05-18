/*
** EPITECH PROJECT, 2018
** hangman
** File description:
** oui
*/

#include "../include/hangman.h"
#include "../include/get_next_line.h"

void	display(char *play, int tries)
{
	my_putstr(play);
	my_putstr("\n");
	my_putstr("Tries: ");
	my_put_nbr(tries);
	my_putstr("\n\n");
	return;	
}

int	verifword(char *word, char *play, char c, int tries)
{
	int	i = 0;
	int	bool = 0;

	while (word[i] != '\0') {
		if (word[i] == c) {
			bool = bool + 1;
			play[i] = word[i];
		}
		i = i + 1;
	}
	if (bool == 0) {
		my_putchar(c);
		my_putstr(": is not in this word\n");
		tries =  tries - 1;
	}
	return (tries);
}

int	hangman(char *word, char *play, int tries)
{
	char	*player;

	while (1) {
		display(play, tries);
		my_putstr("Your letter: ");
		player = get_next_line(0);
		if (my_strlen(player) == 1 && player['\0'])
			tries = verifword(word, play, player[0], tries);
		else
			my_putstr("not a letter try again\n");
		if (tries <= 0) {
			display(play,tries);
			my_putstr("You lost!\n");
			break;
		}
		if (my_strcmp(word, play) == 0) {
			display(play, tries);
			my_putstr("Congratulations!\n");
			break;
		}
	}
	return (0);
}
