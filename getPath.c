#include "holberton.h"

/**
 * getPath - Get the PATH from env
 * @env: Enviroment variables
 * Return: The token of path variable
 */

char **getPath(char **env)
{
	char *pointer;
	char **pointerTOK;

	pointer = arrRet(env);   /** get the string from path **/
	pointerTOK = _strtok2(pointer);   /** Tokenize the string from path **/

	return (pointerTOK);
}
