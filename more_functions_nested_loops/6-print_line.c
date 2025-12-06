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
    int n;
  
    for(i = 0; i < n;i++)
        if (n!=0 && !(n < 0))
            putchar('_');
        else
            putchar('\n');
    putchar('\n');
	}
}
