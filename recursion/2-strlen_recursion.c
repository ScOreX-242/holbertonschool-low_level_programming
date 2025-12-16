#include "main.h"

/**
 * _print_rev_recursion - prints function that returns the length of a string.
 * @s: the string to print
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
  return (1 + _strlen_recursion(s + 1));
}
