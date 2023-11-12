#include "main.h"
/**
 * print_u - Prints an unsigned integer in base 10.
 * @list: Variable argument list containing the unsigned integer.
 */
void print_u(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);
	if (num / 10)
		print_u(num / 10);
	_putchar((num % 10) + '0');
}
