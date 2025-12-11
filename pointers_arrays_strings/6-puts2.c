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
  for(b = b-1;i<=b;i=i+2)
    putchar(str[i]);
}
