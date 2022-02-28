#include "main.h"
/**
 * _strchr - this function locates a character
 *
 * @s: string
 * @n: 
 *
 * Return: dest
 */

}
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s[i]);
			break;
		}
		else if (s[i] == '\0')
		{
			return (NULL);
		}
	}
}
