/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @s: The string to be modified.
 *
 * Description:
 * The function iterates through the string and uses the ASCII difference
 * between lowercase and uppercase letters to perform the conversion
 * in place. The ASCII value of a lowercase letter is 32 greater than
 * its uppercase counterpart.
 *
 * Return: A pointer to the resulting string s.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
