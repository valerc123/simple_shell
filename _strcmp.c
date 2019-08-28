#include "holberton.h"

/**
 * _strcmp - Returns an integer after comparing two strings.
 * @s1: First string
 * @s2: Second string
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, count = 0;

	while (s1 != '\0' && s2 != '\0' && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		{
			i++;
		} else if (s1[i] != s2[i])
		{
			count = (s1[i] - '0') - (s2[i] - '0');
			break;
		}
	}
	return (count);
}
