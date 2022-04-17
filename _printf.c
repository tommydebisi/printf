#include "main.h"

/**
 * _printf - prints and returns length of format and arg.
 * @format: string where specifiers are also called
 * Return: count sum
 */

int _printf(const char *format, ...)
{
	/*declare variable and initialize struct to be used*/
	int i, sum = 0, count;
	va_list arg;
	/* initialize arg with format*/
	va_start(arg, format);
	if (!format)
		return (-1);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{/*it is a normal character so print*/
			_putchar(format[i]);
			sum += 1;
			continue;
		}
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{/*means it's %% so it should print %*/
				_putchar('%');
				sum += 1;
				continue;
			}
		}
		if (format[i + 1] == '\0')
			return (-1);
		count = count_spec(format[i + 1], arg);/*the count of arg*/
		if (count == -1 || count != 0)
			i++;
		if (count > 0)/*count_spec used and the specifier is correct*/
			sum += count;
		if (count == 0)/*invalid specifier, treat as normal character*/
		{
			_putchar('%');
			sum += 1;
		}
	}
	va_end(arg);
	return (sum);
}
