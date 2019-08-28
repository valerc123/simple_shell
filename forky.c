
#include "holberton.h"

/**
 * forky - Executes the fork
 * @argum: Array of pointers
 * @path: The tokens of path
 * @env: Environment variables
 * Return: 0 on succes, -1 on failure
 */

int forky(char **argum, char **path, char **env, char *buff)
{
	pid_t pid;
	int i = 0, c = -1;

	pid = fork();
	if (pid == 0)
	{
		if (argum[0][0] == '/')
		{
			if (execve(argum[0], argum, NULL) == -1)
				return (-1);
		}
		else
		{
			while (c < 0 && path[i] != NULL)
			{
				c = access(path[i], X_OK | F_OK);
				if (c < 0)
					i++;
			}
			if (path[i] == NULL)
				return (execve(path[0], argum, NULL));
			execve(path[i], argum, NULL);
		}
		return (-1);
	}
	else if (pid < 0)
		return (-1);
	else if (pid > 0)
		wait(&pid);

	if ((strcmp(argum[0], "env") == 0) || (strcmp(argum[0], "exit") == 0))
	{
		if (exitEnvBuilt(env, argum[0]) == -1)
			return (-1);
		return (0);
	};
	free(buff);
	return (0);
}
