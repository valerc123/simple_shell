#include "holberton.h"

/**
 * ptrCount - Counts pointers
 * @ptr: Arr of pointers
 * Return: Cuantity of pointers
 */

int ptrCount(char **ptr)
{
	int count = 0;

	while (ptr[count] != NULL)
		count++;

	return (count);
}
