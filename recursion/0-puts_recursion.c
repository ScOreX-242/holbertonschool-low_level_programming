#include "main.h"

void _puts_recursion(char *s)
{
    int i = 0;
    if (*s == '\0')
        return (0);
    _putchar(s[i]);
    return *s[i + 1];
}
