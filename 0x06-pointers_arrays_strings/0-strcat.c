#include "main.h"
/**
 * *_strcat - this function concatnates two strings
 */
char *_strcat(char *dest, char *src)
{
	int lenth = 0;
	int lenthDest = 0;

	while(dest[length] != '\0')
	{
		length++;
		if (dest[length] == '\0') 
		{
			while(src[lengthDest] != '\0')
			{
				dest[length] = dest[src[lengthDest]];
				length++;
				lengthDEst++;
			}
		}
	}
}
