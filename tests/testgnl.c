/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** testlib
*/
#include "lemin.h"

Test(get_next_line, bad_file)
{
	int fd = open("daa.txt", O_RDONLY);
	cr_redirect_stdout();
	char *expected = "Confidence is so overrated.";
	char *got = get_next_line(fd);
	close(fd);
}

Test(get_next_line, read_line)
{
	int fd = open("./tests/data.txt", O_RDONLY);
	cr_redirect_stdout();
	char *expected = "Confidence is so overrated.";
	char *got = get_next_line(fd);
	close(fd);
}

Test(get_next_line, read_line2)
{
	int fd = open("./tests/data1.txt", O_RDONLY);
	cr_redirect_stdout();
	char *expected = "Confidence is so overrated.";
	char *got = get_next_line(fd);
	close(fd);
}
