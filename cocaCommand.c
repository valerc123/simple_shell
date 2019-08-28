#include "holberton.h"

/**
 * cocaCommand - Adds the command at the end
 * @command: Commmand to add
 * @arrEnv: Arr of pointers
 * Return: Arr modified
 */

char **cocaCommand(char *command, char **arrEnv)
{
	int lenArr = 0, lenComm = 0;
	int i, j, p = 0, numPtsArr = 0;
	char **retArr;

	lenComm = _strLen(command);

	while (arrEnv[numPtsArr])
		numPtsArr++;

	retArr = (char **)malloc(sizeof(char *) * (numPtsArr + 1));

	for (i = 0; arrEnv[i] != NULL; i++)
	{
		p = 0;
		lenArr = _strLen(arrEnv[i]);
		retArr[i] = malloc(sizeof(char) * (lenComm + lenArr + 2));
		for (j = 0; j <= (lenComm + lenArr); j++)
		{
			if (j < lenArr)
				retArr[i][j] = arrEnv[i][j];
			else if (j == lenArr)
				retArr[i][j] = '/';
			else
			{
				retArr[i][j] = command[p];
				p++;
			}
		};
		retArr[i][j] = '\0';
	};

	retArr[i] = NULL;
	return (retArr);
}

