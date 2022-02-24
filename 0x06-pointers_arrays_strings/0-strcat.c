#include "main.h"
/**
 * *_strcat - this function concatnates two strings
 */
char *_strcat(char *dest, char *src)
{
	int length = 0;
	int length2 = 0;
	char complete[98];

	while(dest[length] != '\0')
	{
		if (dest[length2] != '\0')
		{
			complete[length] = dest[length];
		}
		length++;
		if (dest[length] == '\0')
		{
			while(src[length2] != '\0')
			{
				complete[length] = src[length2];
				length++;
				length2++;
			}
		}
	}
	length = 0;
	while (complete[length != '\0'])
	{
		dest[length] = complete[length];
		length++;
	}
	return (*dest);
}
