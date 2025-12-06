/*
 * File: 7-print_last_digit.c
 * Auth: Amin Israfilov
 */

#include "main.h"

/**
 * print_last_digit() - function that prints the last digit of a number.
 * @n: The character to be checked.
 *
 * Return: the last digit of a number.
 */

int print_last_digit(int n)
{
  n = n%10;
  return(n);
}
