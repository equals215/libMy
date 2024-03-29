/*
** EPITECH PROJECT, 2017
** my_str_to_word_array.c
** File description:
** thomas.foubert@epitech.eu
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void *smalloc(size_t size);

static int is_it_alpha(char c)
{
	if (c != ' ')
		return (1);
	return (0);
}

static int count_words(char *str)
{
	int word = 0;
	int i = 0;
	int nb_words = 0;

	while (str[i]) {
		if (word == 0 && is_it_alpha(str[i]) == 1) {
			word = 1;
			nb_words++;
		}
		if (word == 1 && is_it_alpha(str[i]) == 0)
			word = 0;
		i++;
	}
	return (nb_words);
}

static void dup_n_car(char *new_str, char *str, int begin, int end)
{
	int i = 0;

	while (begin <= end) {
		new_str[i] = str[begin];
		begin = begin + 1;
		i = i + 1;
	}
	new_str[i] = '\0';
}

static void save_words(char **tab, char *str, int nb_words)
{
	int i = 0;
	int begin = 0;
	int word_cur = 0;

	while (word_cur < nb_words) {
		while (str[i] && is_it_alpha(str[i]) == 0)
			i++;
		begin = i;
		while (str[i] && is_it_alpha(str[i]) == 1)
			i++;
		tab[word_cur] =
		(char *) smalloc(sizeof(char) * ((i - 1) - begin + 2));
		dup_n_car(tab[word_cur], str, begin, i - 1);
		i++;
		word_cur++;
	}
}

char **my_str_to_word_array(char *str)
{
	int nb_words = 0;
	char **tab = NULL;

	nb_words = count_words(str);
	tab = smalloc(sizeof(char *) * (nb_words + 1));
	save_words(tab, str, nb_words);
	tab[nb_words] = NULL;
	return (tab);
}
