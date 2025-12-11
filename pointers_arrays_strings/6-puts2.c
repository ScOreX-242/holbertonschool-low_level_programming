/*
 * File: 6-puts2.c
 * Auth: Amin Israfilov
 */

#include "main.h"

/**
 * puts2 - Function that prints every other character of a string, starting with the first character
 * @str: The string to modify
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (b = b-1 ; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
