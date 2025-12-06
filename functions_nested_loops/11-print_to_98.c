/*
 * File: 11-print_numbers.c
 * Auth: Amin Israfilov
 */

#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all integers from n to 98.
 * @n: The starting integer.
 *
 * Description: Numbers are separated by a comma and a space.
 * Followed by a new line.
 * Return: void.
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		i = n;
		while (i <= 98)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
			i++;
		}
	}
	else if (n > 98)
	{
		i = n;
		while (i >= 98)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
			i--;
		}
	}
	else
	{
		printf("98");
	}

	printf("\n");
}
