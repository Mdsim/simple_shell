#include "shell.h"

/**
* interactive - this returns true if shell is interactive mode
* @info: struct address
* Return: 1 if interactive mode, 0 if not.
*/

int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
* is_delim - this checks if character is a delimeter
* @c: the char to check
* @delim: the delimeter string
* Return: 1 on success, 0 if false
*/

int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
* _isalpha - this checks for alphabetic character
* @c: The character to be inputed
* Return: 1 if c is alphabetic, 0 if not
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
* _atoi - this converts a string to an integer
* @s: the string to be convert
* Return: returns 0 or converted number
*/

int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0;  s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
