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
	int b = 99;
	for (; n != b; n++)
	{
		printf("%d", n);
		if (n < b-1)
		{
			printf(", ");
		}
	}
	if (n < 0)
	{
		for (; n != b + 1; n--)
		{
			printf("%d", n);
			if (n != b + 1)
			{
				printf(", ");
			}
		}
	}
    if (n > b)
	{
		for (; n != b; n--)
		{
			printf("%d", n);
			if (n != b + 1)
			{
				printf(", ");
			}
		}
	}
}
