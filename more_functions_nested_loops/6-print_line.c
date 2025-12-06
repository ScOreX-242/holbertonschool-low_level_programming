/*
 * File: 5-more_numbers.c
 * Auth: Brennan D Baraban
 */

#include "main.h"

/**
 * more_numbers - Prints the numbers 0-14 ten times.
 */
void print_line(int n)
{
	  int i;
  
    for(i = 0; i < n;i++)
		{
        if (n!=0 && !(n < 0))
            _putchar('_');
        else
            _putchar('\n');
		}
    _putchar('\n');
}
