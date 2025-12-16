#include "main.h"

/**
 * _print_rev_recursion - prints function that prints a string in reverse.
 * @s: the string to print
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	int i = 0;
	int len = 0;
	while (*s != '\0')
		len++;
	_putchar(*s[len]);
	_print_rev_recursion(s[len - 1]);
}
