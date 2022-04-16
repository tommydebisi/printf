#include "main.h"
/**
 * use_c - when format is c
 * @arg: argument
 * Return: 1
 */

int use_c(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}
/**
 * use_s - when format is s
 * @arg: argument
 * Return: length
 */

int use_s(va_list arg)
{
	/*declare a char pointer*/
	char *s;
	int i, len;

	s = va_arg(arg, char *);

	if (s)
	{
		len = _strlen(s);/*get length of string arg*/
		for (i = 0; i < len; i++)
			_putchar(s[i]);
	}
	return (len);
}
