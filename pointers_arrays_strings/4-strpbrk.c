/**
 * _strpbrk - Locates the first occurrence in a string of any byte
 * from a set of accepted bytes.
 * @s: The string to be searched.
 * @accept: The string containing the bytes to look for.
 *
 * Description:
 * The function iterates through the string s and compares each character
 * against every character in the accept string.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in
 * accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return (0);
}
