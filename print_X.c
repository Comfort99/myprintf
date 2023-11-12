#include "main.h"
/**
 * print_X - Prints an unsigned integer in uppercase hexadecimal.
 * @list: Variable argument list containing the unsigned integer.
 */
void print_X(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);
	if (num / 16)
		print_X(num / 16);
	_putchar("0123456789ABCDEF"[num % 16]);
}
