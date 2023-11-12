#include "main.h"
/**
 * print_char - function prints characters
 * @sep: separator string to be printed
 * the before charactor
 * @list: list of characters
 */
void print_char(va_list list, char *sep)
{
	char c;

	write(1, sep, strlen(sep));

	c = va_arg(list, int);

	write(1, &c, 1);
}
/**
 * print_int - Print an integer to the standard output with a separator.
 * @list: Variable argument list containing the integer to be printed.
 * @sep: Separator string to be printed before the integer.
 */
void print_int(va_list list, char *sep)
{
	int num;
	char num;

	write(1, sep, strlen(sep));

	num = va_arg(list, int);
	num_str[12];
	sprintf(num_str, "%d", num);

	write(1, num_str, strlen(num_str));
}
/**
 * print_float - Print a float to the standard output with a separator.
 * @list: Variable argument list containing the float to be printed.
 * @sep: Separator string to be printed before the float.
 */
void print_float(va_list list, char *sep)
{
	double f;
	char f_str[64];

	write(1, sep, strlen(sep));

	f = va_arg(list, double);
	sprintf(f_str, "%f", f);

	write(1, f_str, strlen(f_str));
}
/**
 * print_string - Print a string to the standard output with a separator.
 * @list: Variable argument list containing the string to be printed.
 * @sep: Separator string to be printed before the string.
 */
void print_string(va_list list, char *sep)
{
	char *str = va_arg(list, char *);

	if (!str)
		str = "(nil)";
	write(1, sep, strlen(sep));
	write(1, str, strlen(str));
}
/**
 * print_all - Print a list of values to the standard output based on a format.
 * @format: Format string specifying the types of values to print.
 * @...: Variable arguments containing the values to print.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *sep = "";
	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					print_char(list, sep);
					break;
				case 'i':
					print_int(list, sep);
					break;
				case 'f':
					print_float(list, sep);
					break;
				case 's':
					print_string(list, sep);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	write(1, "\n", 1);
	va_end(list);
}
