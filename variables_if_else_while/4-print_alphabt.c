/*
 * File: 4-print_alphabt.c
 * Auth: Amin Israfilov <12640@holbertonstudents.com>
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, skipping 'e' and 'q'.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}
	putchar('\n');

	return (0);
}
