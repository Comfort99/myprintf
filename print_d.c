#include "main.h"
/**
 * print_width - Prints padding based on width and fill character.
 * @width: The minimum width of the output.
 * @fill: The character used for padding (' ' for space, '0' for zero-padding).
 * Return: The number of characters printed for padding.
 */
int print_width(int width, char fill)
{
	int i = 0;

	while (i < width)
	{
		_putchar(fill);
		i++;
	}
	return (i);
}
/**
 * print_d - Prints a decimal number with optional width and padding.
 * @list: A va_list of arguments.
 * @width: The minimum width of the output.
 * @fill: The character used for padding (' ' for space, '0' for zero-padding).
 * Return: The number of characters printed.
 */
int print_d(va_list list, int width, char fill)
{
	int n = va_arg(list, int);
	int num, last = n % 10;
	int i = 1;
	int exp = 1, digit;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (fill == '0')
		i += print_width(width - i, fill);
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	if (fill != '0')
		i += print_width(width - i, fill);
	_putchar(last + '0');
	return (i);
}
