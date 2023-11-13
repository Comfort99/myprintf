#include "main.h"
/**
 * print_u - Prints an unsigned integer in base 10.
 * @list: Variable argument list containing the unsigned integer.
 * Return: intiger
 */
int print_u(va_list list)
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
	_putchar(last + '0');
	return (i);
}
