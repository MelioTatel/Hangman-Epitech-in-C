/*
** EPITECH PROJECT, 2018
** hangman
** File description:
** do the include for the hangman
*/

#ifndef HANGMAN_H
#define HANGMAN_H

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int	checknumber(char *str);
int	my_strlen(char const *str);
int	my_getnbr(char const *str);
int	my_strcmp(char *s1, char *s2);
int	game(char *files, int tries);
int	hangman(char *word, char *play, int tries);
int	my_put_nbr(int nb);
void	my_putchar(char c);
void	my_putstr(char *c);
void	my_putstrer(char *c);
void	my_put_tab(char **map);
void	my_put_tabspace(char **map);
char	**my_str_to_wordtab(char *str, char sep);

#endif
