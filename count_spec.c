#include "main.h"
/**
 * count_spec - count and print the specifer arg.
 * @chr: character
 * @arg: va_list
 * Return: number of characters printed minus the \0
 */

int count_spec(char chr, va_list arg)
{
	/*initializing struct*/
	chr_st _char[] = {
		{"c", use_c},
		{"s", use_s},
		{"i", use_i},
		{"d", use_i},
		{NULL, NULL}
	};
	int j;

	/*going through struct array*/
	for (j = 0; j < 4; j++)/*loop through struct array*/
	{
		if (chr == *(_char[j].str))
			return (_char[j].f(arg));/*gets length*/
	}
	return (0);
}
