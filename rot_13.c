#include "main.h"

/**
 * use_R - prints rot13'ed string
 * @arg: argument passed
 * Return: length of string
 */

int use_R(va_list arg)
{
	/*declare variables to be used with loop and arg*/
	int i;
	char *str = va_arg(arg, char *), *new;

	if (str == NULL)
	{
		_puts("(null)");
		return (6);
	}
	else if (*str == '\0')
		return (-1);
	new = rot13(str);
	/*going through the loop*/
	for (i = 0; new[i] != '\0'; i++)
		_putchar(new[i]);/*print changed characters*/

	free(new);/*free malloc space*/
	return (i);
}
