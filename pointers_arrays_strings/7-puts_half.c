/*
 * File: 7-puts_half.c
 * Auth: Amin Israfilov
 */

#include "main.h"

/**
 * puts2 - Function that prints half of a string
 * @str: The string to modify
 */
void puts_half(char *str)
{
  int len = 0;
	int i = 0;
  int norm_len;
  int half_len;

	while (str[len] != '\0')
	{
		len++;
	}
  norm_len = len - 1;
  if (norm_len % 2 == 0)
  {
    half_len = norm_len / 2 ;
    for(i += half_len; i < len; i += 1)
      _putchar(str[i]);
  }
  else
{
    half_len = ( len + 1 ) / 2;
    for(i += half_len; i < len; i += 1)
      _putchar(str[i]);
}
	_putchar('\n');
}
