#include "holberton.h"

#define DELIMITER " \t\n\r\a"

/**
 * _strtok1 - Return an array of tokens
 * @buff: String
 * Return: An array
 */

char **_strtok1(char *buff)
{
	int i = 0, sizeCopy = 0, tokCuantity = 0;
	char *token, **arr_TOK, *copy;

	sizeCopy = _strLen(buff);
	copy = malloc(sizeof(char) * (sizeCopy + 1));

	if (copy == NULL)
	{
		free(copy);
		perror("Error: ");
	};

	copy = _strcpy(copy, buff);
	token = strtok(copy, DELIMITER);

	while (token)
	{
		tokCuantity++;
		token = strtok(NULL, DELIMITER);
	};

	free(copy);

	arr_TOK = (char **)malloc(sizeof(char *) * tokCuantity);
	token = strtok(buff, DELIMITER);

	while (token)
	{
		arr_TOK[i] = malloc(sizeof(char) * _strLen(token) + 1);
		arr_TOK[i] = token;
		token = strtok(NULL, DELIMITER);
		i++;
	};

	arr_TOK[i] = NULL;

	return (arr_TOK);

}
