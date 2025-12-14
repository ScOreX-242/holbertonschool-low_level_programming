/**
 * leet - Encodes a string into 1337 (Leet Speak).
 * @s: The string to be encoded.
 *
 * Description:
 * Replaces 'a'/'A' with '4', 'e'/'E' with '3', 'o'/'O' with '0',
 * 't'/'T' with '7', and 'l'/'L' with '1'.
 *
 * Return: A pointer to the modified string s.
 */
char *leet(char *s)
{
	int i;
	int j;
	char leet_letters[] = "aAeEoOtTlL";
	char leet_numbers[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; leet_letters[j] != '\0'; j++)
		{
			if (s[i] == leet_letters[j])
			{
				s[i] = leet_numbers[j];
			}
		}
	}

	return (s);
}
