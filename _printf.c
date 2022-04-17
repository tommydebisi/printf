#include "main.h"

/**
 * _printf - produces output according to output
 * @format: argument
 * Return: res
 */

int _printf(const char *format, ...)
{
	/*declare variable and initialize struct to be used*/
	int i, sum = 0, count = 0;
	va_list arg;
	/* initialize arg with format*/
	va_start(arg, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{/*it is a normal character so print*/
			_putchar(format[i]);
			sum++;
			continue;
		}
		if (format[i + 1] == '%')
		{/*means it's %% so it should print %*/
			_putchar('%');
			sum++;
			i++;/*forgot to do this*/
			continue;
		}
		while (format[i + 1] == ' ')
			i++;
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
			sum++;
		}
	}
	va_end(arg);
	return (sum);
}
