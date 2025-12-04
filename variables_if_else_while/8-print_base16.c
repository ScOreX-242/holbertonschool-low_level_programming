/*
 * File: 8-print_base16.c
 * Auth: Amin Israfilov <12640@holbertonstudents.com>
 */

#include <stdio.h>

/**
 * main - Program that prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 0x30; letter <= 0x66; letter++)
	{
		if (letter <= 0x39 || letter > 0x60)
		{
			putchar(letter);
		}
	}
	putchar('\n');

	return (0);
}
