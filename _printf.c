#include "main.h"

/**
 * _printf - produces output according to output
 * @format: argument
 * Return: res
 */

int _printf(const char *format, ...)
{
	/*declare variable and initialize struct to be used*/
	int i, sum = 0, count;
	va_list arg;
	/* initialize arg with format*/
	va_start(arg, format);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			sum += 1;
			continue;
		}
		if (format[i] == '%')
		{
			++i;
			if (format[i] == '%')
			{/*means it's %% so it should print %*/
				_putchar('%');
				sum += 1;
				continue;
			}
			if (format[i] == '\0')
				return (-1);
			count = count_spec(format[i], arg);/*the length*/
		}
		if (count > 0)
			sum += count;
		if (count == 0 && format[++i] == '\0')
			return (-1);
		if (count == 0)/*no stat. was done do this*/
		{
			_putchar('%');
			_putchar(format[i]);
			sum += 2;
		}
	}
	va_end(arg);
	return (sum);
}
