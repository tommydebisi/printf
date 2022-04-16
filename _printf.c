#include "main.h"

/**
 * _printf - produces output according to output
 * @format: argument
 * Return: res
 */

int _printf(const char *format, ...)
{
	/*declare variable and initialize struct to be used*/
	chr_st _char[] = {
		{"c", use_c},
		{"s", use_s},
		{NULL, NULL},
	};

	int i, j, sum = 0;
	va_list arg;
	/* initialize arg with format*/
	va_start(arg, format);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			sum += 1;
		}
		if (format[i] == '%')
		{
			++i;
			for (j = 0; j < 2; j++)/*loop through struct array*/
			{
				if (format[i] == *(_char[j].str) && format[i] != '%')
					sum += _char[j].f(arg);/*gets length*/
			}
		}
		if (format[i] == '%')
		{
			_putchar('%');
			sum += 1;
		}
	}
	va_end(arg);
	return (sum);
}
