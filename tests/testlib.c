/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** testlib
*/

#include "lemin.h"

Test(lib, my_strlen)
{
	char *str = "coucou";

	cr_redirect_stdout();
	cr_assert(my_strlen(str) == 6);
}

Test(lib, my_putchar)
{
	char c = 'c';

	cr_redirect_stdout();
	my_putchar(c);
	cr_assert_stdout_eq_str("c");
}

Test(lib, getnbr)
{
	char *str = "12";

	cr_redirect_stdout();
	cr_assert(my_getnbr(str) == 12);
	cr_assert(my_getnbr("-12") == -12);
	cr_assert(my_getnbr("2147483649") == 0);

}

Test(lib, putstr)
{
	char *str = "coucou";

	cr_redirect_stdout();
	my_putstr(str);
	cr_assert_stdout_eq_str("coucou");
}

Test(lib, lib4)
{
	int i = 2;
	int j = 1;
	int tab[2] = {5, 1};
	char str[5] = "tutu";
	char str2[5] = "tutI";

	my_sort_int_array(tab, 2);
	cr_assert(tab[0] == 1);
	my_swap(&i, &j);
	my_strupcase(str);
	cr_assert_str_eq(str, "TUTU");
	my_revstr(str);
	cr_assert_str_eq(str, "UTUT");
	cr_assert_str_eq(my_strstr(str2, "tut"), "tutI");
	cr_assert(my_strcmp("tut", "tut") == 0);
	cr_assert(my_strncmp("tut", "tut", 3) == 0);
	cr_assert(my_strcmp("tt", "tut") <= 0);
	cr_assert(my_strncmp("tt", "tut", 3) <= 0);
	cr_assert(my_strncmp("tt", "tut", 0) <= 0);
}