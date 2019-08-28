#include "holberton.h"

/**
 * _strLen - Return the length of a string
 * @str: String
 * Return: Length
 */

int _strLen(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	};

	return (i);
}
