#include "main.h"

/**
   * print_d - prints decimal
    * @args: argument to print
     * Return: integer
      */

int print_d(va_list args)
{
		int n = va_arg(args, int);
		int number, end = n % 10, dig;
		int  i = 1;
		int exp = 1;

		n = n / 10;
		number = n;

		if (end < 0)
		{
			_putchar('-');
			number = -number;
			n = -n;
			end = -end;
			i++;
		}
		if (number > 0)
		{
			while (number / 10 != 0)
		{
			exp = exp * 10;
			number = number / 10;
		}
			number = n;
			while (exp > 0)
			{
			dig = number / exp;
			_putchar(dig + '0');
			number = number - (dig * exp);
			exp = exp / 10;
			i++;
			}
	}
		_putchar(end + '0');
return (i);
}
