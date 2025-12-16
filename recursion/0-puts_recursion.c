#include "main.h"

void _puts_recursion(char *s)
{
    int i = 0;
    if (*s == '\0')
        return;
    _putchar(s[i]);
    _puts_recursion(*s[i+1]);
}
