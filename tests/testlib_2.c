/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** testlib
*/

#include "lemin.h"


Test(lib, pnbr)
{
	int over = 2147483648;

	cr_redirect_stdout();
	my_put_nbr(10);
	my_put_nbr(2);
	my_put_nbr(-1);
	cr_assert_stdout_eq_str("102-1");
	cr_assert(my_put_nbr(over) == 0);
}

Test(lib, atoi)
{
	char *str = "12";
	cr_redirect_stdout();
	cr_assert(my_atoi(str) == 12);
	cr_assert(my_atoi("a") == 0);
}

Test(lib, compute)
{
	cr_redirect_stdout();
	cr_assert(my_compute_power_rec(10, 0) == 1);
	cr_assert(my_compute_power_rec(10, -5) == 0);
	cr_assert(my_compute_power_rec(2, 2) == 4);
	cr_assert(my_compute_square_root(1) == 1);
	cr_assert(my_compute_square_root(0) == 0);
	cr_assert(my_compute_square_root(4) == 2);
}

Test(lib, lib3)
{
	char *str;
	cr_redirect_stdout();
	my_isneg(2);
	my_isneg(-1);
	cr_assert_stdout_eq_str("PN");
	cr_assert(my_is_prime(11) == 1);
	cr_assert(my_is_prime(8) == 0);
	cr_assert(my_find_prime_sup(10) == 11);
	cr_assert_str_eq(my_itos(10), "10");
	cr_assert_str_eq(my_itos(-1), "-1");
	my_revstr("");
}

Test(lib, lib5)
{
	char str[5] = "TUTU";
	char str2[10] = "tuTu titi";
	char str3[2] = {2, '\0'};

	my_strlowcase(str);
	cr_assert_str_eq(str, "tutu");
	my_strcapitalize(str2);
	cr_assert_str_eq(str2, "Tutu Titi");
	cr_assert(my_str_isalpha(str) == 1);
	cr_assert(my_str_isalpha("") == 1);
	cr_assert(my_str_isalpha(str2) == 0);
	cr_assert(my_str_islower("tt") == 1);
	cr_assert(my_str_islower("TT") == 0);
	cr_assert(my_str_islower("") == 1);
	cr_assert(my_str_isnum("2") == 1);
	cr_assert(my_str_isnum("TT") == 0);
	cr_assert(my_str_isnum("") == 1);
	cr_assert(my_str_isprintable("2") == 1);
	cr_assert(my_str_isprintable(str3) == 0);
	cr_assert(my_str_isprintable("") == 1);
}