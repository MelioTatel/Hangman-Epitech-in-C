/*
** EPITECH PROJECT, 2018
** my_strcmp
** File description:
** do the fonction to compare 2 string
*/

#include "../include/hangman.h"

int	len(char *str)
{
	int	i = 0;

	while (str[i] != '\0') {
		i++;
	}
	return (i);
}

int	checknumber(char *str)
{
	int	c = 0;

	while (str[c] != '\0') {
		if (str[c] <= '9' && str[c] >= '0')
			c++;
		else
			return (1);
	}
	return (0);
}

int	my_strcmp(char *s1, char *s2)
{
	int	i = 0;
	int	j = 0;

	if (len(s1) != len(s2))
		return (42);
	while (s1[i] != '\0' && s2[i] != '\0') {
		if (len(s1) < len(s2) || len(s1) > len(s2))
			return (84);
		if (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
			i++;
		else {
			i++;
			j++;
		}
	}
	return (j);
}
