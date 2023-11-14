#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert p[] = {
		{"%s", print_strings}, {"%c", printc},
		{"%%", print_37},
		{"%i", print_int}, {"%d", print_d}, {"%r", print_strev},
		{"%R", *rot13}, {"%b", printbinary},
		{"%u", print_un},
		{"%o", print_ot}, {"%x", print_x}, {"%X", print_X},
		{"%S", printEXstr}, {"%p", printptr}
	};

	va_list list;
	int i = 0, j, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].ph[0] == format[i] && p[j].ph[1] == format[i + 1])
			{
				length += p[j].function(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}
