#include "holberton.h"

/**
 * arrRet - Return an array
 * @env: Environment variables
 * Return: An array
 */

char *arrRet(char **env)
{
	char *ptr;
	int i = 0;

	while (env[i] != NULL)
	{
		if (strcomp(env[i]) != NULL)
		{
			ptr = strcomp(env[i]);
			return (ptr);
		};
		i++;
	};

	return (NULL);
}
