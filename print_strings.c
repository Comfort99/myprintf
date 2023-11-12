#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strngs passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int j;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		if (str == NULL)
		{
			for (j = 0; j < 4; j++)
			{
				_putchar('(');
				_putchar('n');
				_putchar('i');
				_putchar('l');
				_putchar(')');
			}
		}
		else
		{
			for (j = 0; str[j] != '\0'; j++)
			{
				_putchar(str[j]);
			}
		}
		if (i < n - 1 && separator != NULL)
		{
			for (j = 0; separator[j] != '\0'; j++)
			{
				_putchar(separator[j]);
			}
		}
	}
	_putchar('\n');
	va_end(args);
}
