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
  int i = 0;
	int b = 0;

	while (str[b] != '\0')
	{
		b++;
	}
  for(i;i<=b;i+2)
    _putchar(str[i]);
}
