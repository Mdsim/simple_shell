#include "shell.h"

/**
*_eputs - this prints an input string
* @str: the string to be printed
* Return: nothing is returned
*/

void _eputs(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

/**
* _eputchar - writes the character c to stderr
* @c: the character to print
* Return: On success 1,-1 on error and errno is set appropriately.
*/

int _eputchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
* _putfd - this writes the character c to given fd
* @c: the character to print
* @fd: he filedescriptor to write to
* Return: returns 1 on success, -1 on erro,
*	and errno is set appropriately.
*/

int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
*_putsfd - this prints an input string
* @str: the string to be printed
* @fd: the filedescriptor to write to
* Return: the number of chars inputed
*/

int _putsfd(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}
