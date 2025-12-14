/**
 * _strncpy - Copies up to n characters from a source string to a destination.
 * @dest: The buffer where the characters are to be copied.
 * @src: The source string to copy characters from.
 * @n: The maximum number of characters to be copied from src.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
