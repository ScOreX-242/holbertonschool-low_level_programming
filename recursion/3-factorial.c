#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @s: the string to measure
 *
 * Return: the length of the string
 */
int factorial(int n)
{
     if (n < 0)
        return (-1);
    return(n * factorial(n+1));
}
