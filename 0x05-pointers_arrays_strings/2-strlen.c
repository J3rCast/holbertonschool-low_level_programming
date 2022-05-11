/**
 * _strlen - this function return the legth of a string
 *
 * @s: value
 *
 * Return: value
 */
int _strlen(char const *s)
{
	char n = 'a';
	int i;

	for (i = 0; (n != '\0'); i++)
	{
		n = s[i];
	}
	return (i - 1);
}
