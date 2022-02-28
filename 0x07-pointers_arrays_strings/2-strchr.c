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
	int i = 0;
	int x = 0;
	char exit[];

	while (s[i] != c)
	{
		i++;
	}
	/*i--;*/
	while (s[i] != '\0')
	{
		exit[x] = s[i];
		i++;
		x++;
	}
	return (exit);
}
