#include "holberton.h"

/**
 * _strcpy - Copies a string to another
 * @dest: Destination str
 * @src: Source str
 * Return: The destination str
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0, j = 0;

	while (*(src + n) != '\0')
	{
		n++;
	};

	while (j <= n)
	{
		dest[j] = *(src + j);
		j++;
	}

	return (dest);
}
