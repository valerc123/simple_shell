#include "holberton.h"

/**
 * _strtok2 - Return an array of tokens
 * @path: The value of the path environment variable
 * Return: An array
 */

char **_strtok2(char *path)
{
	int i = 0, sizeCopy = 0, tokCuantity = 0;
	char *token, **arr_TOK, *copy;

	sizeCopy = _strLen(path);
	copy = malloc(sizeof(char) * (sizeCopy + 1));

	if (copy == NULL)
	{
		free(copy);
		perror("Error: ");
	};

	copy = _strcpy(copy, path);
	token = strtok(copy, ":");

	while (token)
	{
		tokCuantity++;
		token = strtok(NULL, ":");
	};

	free(copy);

	arr_TOK = (char **) malloc(sizeof(char *) * tokCuantity);
	token = strtok(path, ":");

	while (token)
	{
		arr_TOK[i] = malloc(sizeof(char) * _strLen(token) + 1);
		arr_TOK[i] = token;
		token = strtok(NULL, ":");
		i++;
	};

	arr_TOK[i] = NULL;

	return (arr_TOK);
}
