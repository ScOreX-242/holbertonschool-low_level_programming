/*
 * File: 6-abs.c
 * Auth: Amin Israfilov
 */

#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to compute the absolute value of.
 *
 * Return: The absolute value of the integer n.
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-n);
	}
	return (0);
}
