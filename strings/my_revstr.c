/*
** EPITECH PROJECT, 2017
** my_revstr
** File description:
** a function that reverse a string
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
	int i = my_strlen(str) - 1;
	int j = 0;
	char x;

	while (i >= j) {
		x = str[j];
		str[j] = str[i];
		str[i] = x;
		i--;
		j++;
	}
	return (str);
}
