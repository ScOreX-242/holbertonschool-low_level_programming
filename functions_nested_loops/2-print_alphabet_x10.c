/*
 * File: 2-print_alphabet_x10.c
 * Auth: Amin Israfilov
 */

#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times  in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	char letter;
	int i=0;

	while (i<10) {
	for (letter = 'a' ; letter <= 'z' ; letter++)
		_printchar(letter);
	i++;
	_printchar('\n');
	}
}
