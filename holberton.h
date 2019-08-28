#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#define _GNU_SOURCE
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;

char *get_Line(void);
char **_strtok1(char *buff);
char **_strtok2(char *path);
char *_strcpy(char *dest, char *src);
int _strLen(char *str);
char *strcomp(char *envi);
char *arrRet(char **env);
char **cocaCommand(char *command, char **arrEnv);
char **getPath(char **env);
char *_strcat(char *dest, char *src);
int forky(char **argum, char **path, char **env, char *buff);
int exitEnvBuilt(char **env, char *argum);
int _strcmp(char *s1, char *s2);
int nonInteractive(char **env);
int ptrCount(char **ptr);

#endif
