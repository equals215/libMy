/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** testlib
*/

#include "lemin.h"

Test(lib, my_printf)
{
	cr_redirect_stdout();
	my_printf("%s%c%d%u%o%x%X%p%b%S", "t", 'c', 1, 5, 1, 2, 2, 1, 1, "c");
	my_printf("%#o", 1);
	my_printf("%#x", 1);
	my_printf("%#X", 1);
	my_printf("%#3");
	my_printf("test");
	cr_assert_stdout_eq_str("tc151220x11c010x10X1%#3test");
}


Test(lib, my_printf2)
{
	char str[] = {3, 'c', '\0'};
	char str2[] = {30, 'c', '\0'};
	char str3[] = {126, 'c', '\0'};

	cr_redirect_stdout();
	my_putstr_print(str);
	my_putstr_print(str2);
	my_putstr_print(str3);
	cr_assert_stdout_eq_str("\\003c\\036c\\176c");
}

