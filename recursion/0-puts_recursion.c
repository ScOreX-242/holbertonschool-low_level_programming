void _puts_recursion(char *s)
{
    int i = 0;
    int len = 0;
    int ii;
    while(s[i] != '\0')
    {
        len++;
        i++;
    }
    for(ii = 0 ; ii < len ; ii++)
        _putchar(s[ii]);
}
