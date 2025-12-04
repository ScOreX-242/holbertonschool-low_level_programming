/*
 * File: 6-print_numberz.c
 * Auth: Amin Israfilov <12640@holbertonstudents.com>
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	char n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
