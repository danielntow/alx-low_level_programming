/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing the characters to match
 *
 * Return: the number of bytes in the initial segment of s
 * bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != 0; i++)
	{

		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j] == '\0')
			return (i);
	}
	return (i);
}
