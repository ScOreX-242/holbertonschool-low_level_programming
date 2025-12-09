/*
 * File: 1-swap.c
 * Auth: Amin Israfilov
 */

#include "main.h"

/**
 * reset_to_98 - function that swaps the values of two integers.
 * @a: The pointer to an int.
 * @b: The pointer to an int.
 */

void swap_int(int *a, int *b)
{
  int *p = &a;
  int *c = &b;
  *a = &c;
  *b = &p;
}
