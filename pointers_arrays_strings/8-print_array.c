/*
 * File: 8_print_array.c
 * Auth: Amin Israfilov
 */

#include "main.h"

/**
 * print_array - Function that prints n elements of an array of integers.
 * @str: The string to modify
 */

void print_array(int *a, int n)
{
    int i;
    int a[n]={};
    for(i=0; i<n; i++)
      {
        printf("%d", a[i]);
        if(i=n)
        printf("%d", a[n]);
      }
	_putchar('\n');
}
