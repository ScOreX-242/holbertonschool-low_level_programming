/*
 * File: 4-print_rev.c
 * Auth: Amin Israfilov
 */

#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 * @s: The string to print
 */
void print_rev(char *s)
{
	int i = 0;
  int b = 0;
	while (s[i] != '\0')
	{
		b++;
		i++;
	}
	while (s[b] != str[0]);
  {
  _putchar(str[b]);
  b--;
  }
}
