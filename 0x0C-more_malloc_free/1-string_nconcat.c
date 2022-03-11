#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string
 * @s2: string
 * @n: int
 *
 * Return: char value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *complete;
	int i;
	int len1 = 0;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
	{
		len1++;
	}
	complete = malloc(len1 + 1 + (sizeof(char) * n));
	if (complete == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		complete[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		complete[i] = s2[j];
		i++;
	}
	return (complete);
}
