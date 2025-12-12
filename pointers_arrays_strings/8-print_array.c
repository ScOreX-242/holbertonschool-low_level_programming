/*
 * File: 8_print_array.c
 * Auth: Amin Israfilov
 */

#include "main.h"
#include <stdio.h>

/**
 * print_array - Function that prints n elements of an array of integers.
 * @str: The string to modify
 */

void print_array(int *a, int n)
{
    int i;
    for(i=0; i<n-1; i++)
      {
        printf("%d, ", a[i]);
        if(i==n-1)
        printf("%d", a[n-1]);
      }
	_putchar('\n');
}
