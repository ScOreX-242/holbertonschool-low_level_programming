/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: 1 if 'c' is a separator, 0 otherwise.
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}

	return (0);
}

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to be capitalized.
 *
 * Description:
 * A word is considered to start after any of the following characters:
 * space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }.
 *
 * Return: A pointer to the modified string s.
 */
char *cap_string(char *s)
{
	int i;

	/* Capitalize the first character if it is a lowercase letter */
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}

	for (i = 1; s[i] != '\0'; i++)
	{
		/* Check if the previous character was a separator */
		if (is_separator(s[i - 1]))
		{
			/* Check if the current character is a lowercase letter */
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
	}

	return (s);
}
