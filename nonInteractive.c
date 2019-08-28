#include "holberton.h"

/**
 * nonInteractive - Execute in case of non-interctive mode
 * @env: environment variables
 * Return: 0
 */

int nonInteractive(char **env)
{
	size_t size = 69;
	char *buff, **argum;
	char **pathPrint;

	while (getline(&buff, &size, stdin) != EOF)
	{
		argum = _strtok1(buff); /** Returns an array of the tokens of buff **/
		pathPrint = cocaCommand(argum[0], env);
		if (forky(argum, pathPrint, env, buff) == -1)
			return (-1);
	}
	return (0);
}
