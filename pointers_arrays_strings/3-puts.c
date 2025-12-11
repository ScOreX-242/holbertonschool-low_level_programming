/*
 * File: 3-puts.c
 * Auth: Amin Israfilov
 */

#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of @str.
 */
void _puts(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
}
