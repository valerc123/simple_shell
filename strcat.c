#include "holberton.h"

/**
 * *_strcat - Function that concatenates two strings
 * @dest: String.
 * @src: String.
 * Return: A string.
 */

char *_strcat(char *dest, char *src)
{
	int n = 0, j = 0, c, h = 0;

	while (src[n] != '\0')
	{
		n++;
	}
	while (dest[j] != '\0')
	{
		j++;
	}

	for (c = j ; c < (j + n); c++)
	{
		dest[c] = src[h];
		h++;
	}

	return (dest);
}
