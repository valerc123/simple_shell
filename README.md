# SIMPLE SHELL

### ABOUT SHELL

Shell is an environment in which we can run our commands, programs, and shell scripts. 
It allows users to interact with the operating system, processing the commands that are given to them through the scripts. Shells are created through the implementation of system startup scripts.

### VERSION
This version of simple shell has been used on Ubuntu 14.04.5 LTS

### TO RUN
 #### Clone this repo:
```sh
$ git clone "https://github.com/valerc123/simple_shell.git"
```
#### Compile:
```sh
$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
#### Execute:
This shell can be run in interactive mode:
```sh
$ ./hsh
```
Or non-interactive mode: 
```sh
$ echo "ls -l" | ./hsh
```
### EXAMPLES
>Display content of file holberton.h 
```sh
$ cat holberton.h
```
output:
```
#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char * get_Line(void);
char ** _strtok1(char *buff);
char ** _strtok2(char *path);
char *_strcpy(char *dest, char *src);
int _strlen(char *str);
char *strcomp(char *envi);
char *arrRet(char **env);
char **cocaCommand(char *command, char **arrEnv);
char **getPath(char **env);
char *_strcat(char *dest, char *src);
int forky(char **argum, char *buff, char **path, char **env);
int exitEnvBuilt(char **env, char *argum);

#endif

```
Create files
```sh
$ touch file1.c  file2.c
```
Create directory named dirname
```sh
$ mkdir dirname 
```
Path of current directory in non-interactive mode
```sh
$ echo "pwd" | ./hsh
```
>output:
```
/home/vagrant/simple_shell/
```
Enter the folder dirname
```
cd dirname
```
Path of the current directory
```sh
$ pwd
```
>output:
```
/home/vagrant/simple_Shell/dirname/
```
Delete everything from the current directory in non-interactive mode
```sh
$ echo "rm *" | ./hsh
```
List each file's author in long format directory  including hidden files
```sh
$ ls -la --author
```

>output:

```
total 68
drwxrwxr-x 3 vagrant vagrant vagrant 4096 Aug 26 20:23 .
drwxrwxr-x 3 vagrant vagrant vagrant 4096 Aug 26 20:23 ..
-rw-rw-r-- 1 vagrant vagrant vagrant  307 Aug 26 20:23 arrRet.c
-rw-rw-r-- 1 vagrant vagrant vagrant  692 Aug 26 20:23 cocaCommand.c
-rw-rw-r-- 1 vagrant vagrant vagrant  498 Aug 26 20:23 exitEnvBuilt.c
-rw-rw-r-- 1 vagrant vagrant vagrant  765 Aug 26 20:23 forky.c
-rw-rw-r-- 1 vagrant vagrant vagrant  359 Aug 26 20:23 getPath.c
drwxrwxr-x 8 vagrant vagrant vagrant 4096 Aug 26 20:23 .git
-rw-rw-r-- 1 vagrant vagrant vagrant  553 Aug 26 20:23 holberton.h
-rw-rw-r-- 1 vagrant vagrant vagrant 1042 Aug 26 20:23 prompt.c
-rw-rw-r-- 1 vagrant vagrant vagrant  249 Aug 26 20:23 _putchar.c
-rw-rw-r-- 1 vagrant vagrant vagrant  371 Aug 26 20:23 strcat.c
-rw-rw-r-- 1 vagrant vagrant vagrant  360 Aug 26 20:23 strcomp.c
-rw-rw-r-- 1 vagrant vagrant vagrant  326 Aug 26 20:23 _strcpy.c
-rw-rw-r-- 1 vagrant vagrant vagrant  195 Aug 26 20:23 _strLen.c
-rw-rw-r-- 1 vagrant vagrant vagrant  818 Aug 26 20:23 strtok1.c
-rw-rw-r-- 1 vagrant vagrant vagrant  780 Aug 26 20:23 strtok2.c
```

### BUILT-INS
For print all enviroment variables:
```sh
$ env
```
For exit the program:
```sh
$ exit 
```

### AUTHORS
Valentina Rúa | [Twitter](https://twitter.com/329Valentina) | [Github](https://github.com/valerc123) 
Santiago Agudelo | [Twitter](https://twitter.com/sagudecod97) | [Github](https://github.com/sagudecod97) 

### CONTACT
Feel free to send us a message on github with your feedback or any suggestion, or if you have any problems.
