#include "holberton.h"

/**
 * exitEnvBuilt - builtins for env and exit
 * @env: Enviroment variables
 * @argum: Argv[0]
 * Return: 0 on Success, -1 on failure
 */

int exitEnvBuilt(char **env, char *argum)
{
	int i = 0, count = 0;

	if (env == NULL || argum == NULL)
	{
		return (-1);
	};
	if (_strcmp(argum, "env") == 0)
	{
		while (env[i] != NULL)
		{
			count = _strLen(env[i]);
			write(1, env[i], count);
			write(1, "\n", 1);
			i++;
		};
	};
	if (_strcmp(argum, "exit") == 0)
	{
		exit(0);
		return (0);
	};

	return (-1);
}
