
#include "holberton.h"

/**
 * forky - Executes the fork
 * @argum: Array of pointers
 * @path: The tokens of path
 * @env: Environment variables
 * Return: 0 on succes, -1 on failure
 */

int forky(char **argum, char **path, char **env)
{
	pid_t pid;
	int i = 0/**, count = 0**/;

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
			while (path[i])
			{
				/**printf("*******%s\n", path[i]);**/
				i++;
			};

			i = 0;

			while (access(path[i], X_OK | F_OK) < 0 && path[i] != NULL)
			{
				/**printf("%s\n", path[i]);**/
				i++;
			};
			/**count = ptrCount(path);**/
			/**printf("Variable 'i': %i and Count: %i\n", i, count);**/

			/**if (i == ptrCount(path))
				return (-1);**/
			if (path[i] == NULL)
			{
				if ((execve(path[i], argum, NULL)) == -1)
					return (-1);
			} else
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
	return (0);
}
