#include "main.h"
/**
 * print_o - Prints an unsigned integer in base 8.
 * @list: Variable argument list containing the unsigned integer.
 */
void print_o(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);
	if (num / 8)
		print_o(num / 8);
	_putchar((num % 8) + '0');
}
