/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** testlib
*/
#include "lemin.h"

Test(lib, lib6)
{
	char str[5] = "TUTU";
	char str2[10] = "tuTu titi";
	char str3[2] = {2, '\0'};
	char **tab = my_str_to_word_array(str2);
	char dest[5];

	cr_assert(my_str_isupper("tt") == 0);
	cr_assert(my_str_isupper("TT") == 1);
	cr_assert(my_str_isupper("") == 1);
	cr_assert_str_eq(tab[0], "tuTu");
	cr_assert_str_eq(my_strcat(str, str2), "TUTUtuTu titi");
	cr_assert_str_eq(my_strncat(str, str2, 3), "TUTUtuTT");
	cr_assert_str_eq(my_strcpy(dest, str), "TUTUtuTT");
	cr_assert_str_eq(my_strdup("tutu"), "tutu");
}