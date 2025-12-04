/*
 * File: 7-print_tebahpla.c
 * Auth: Amin Israfilov <12640@holbertonstudents.com>
 */

#include <stdio.h>

/**
 * main - Program that prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
