#include "holberton.h"

/**
 * main - Entry point
 * @argc: Unused variable
 * @argv: Unused variable
 * Return: 0 on Success
 */

int main(__attribute__((unused)) int argc, __attribute__((unused)) char **argv)
{
	size_t size = 69;
	char *buff = NULL, **argum = NULL, **path = NULL;
	char **pathPrint = NULL, **pathOut = NULL, **env = environ;
	int c = 0;

	pathOut = getPath(env);
	if (isatty(STDIN_FILENO) != 1)
	{
		nonInteractive(pathOut);
		_free(pathOut);
		return (0);
	};
	while (c != EOF) /** Wait till the signal EOF **/
	{
		buff = malloc(sizeof(char) * size);  /*alloc memory to the buff*/
		if (buff == NULL)
		{
			free(buff);
		};
		write(1, "$ ", 3);
		fflush(stdin); /**clean the stdin**/
		c = getline(&buff, &size, stdin); /** Get what the user types **/
		if (*buff == '\n')
		{_free(pathOut), free(buff), continue; }
		if (c == EOF)
		{free(buff), break; }
		argum = _strtok1(buff); /** Returns an array of the tokens of buff **/
		path = pathOut;
		pathPrint = cocaCommand(argum[0], path);
		if (forky(argum, pathPrint) == -1)
		{_free(argum), _free(pathPrint), free(buff), perror("./shell"), continue; }
		else
		{ _free(argum), _free(pathPrint), free(buff), continue; }
	};
	_free(pathOut);
	return (0);
}
