#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * File: 0-positive_or_negative.c
 * Auth: Amin Israfilov <12640@holbertonstudents.com>
 */

/**
 * main - Prints; Positive anything is better than negative nothing 
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	    printf("is positive");
	if (n == 0)
	    printf("is zero");
	if (n < 0)
	    printf("is negative");
	return (0);
}
