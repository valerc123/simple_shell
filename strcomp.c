#include "holberton.h"

/**
 * strcomp - compares first 4 positions with 'PATH='
 * @envi: Enviroment variable
 * Return: String modified 5 positions
 */

char *strcomp(char *envi)
{
	int i;
	char PATH[] = "PATH=";
	char *strcomp;

	for (i = 0; i <= 4; i++)
	{
		if (envi[i] != PATH[i])
		{
		return (NULL);
		}
	};

	strcomp = envi + 5;
	return (strcomp);
}
