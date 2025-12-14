/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be scanned.
 * @accept: The string containing the characters to match.
 *
 * Description:
 * The function determines the number of characters at the start of
 * s that belong to the set of characters specified by accept.
 *
 * Return: The number of bytes in the initial segment of s which
 * consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j;
	int match;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}

		if (match == 0)
		{
			return (i);
		}
	}

	return (i);
}
