#include "main.h"
/**
 * printptr -   This prints a hexadecvimal number as well
 * @val: argument*
 *Return: Returns the number
 *
 */
int printptr(va_list val)
{
	void *ptr;
	char *str = "(nil)";
	long int x;
	int z, iter;

	ptr = va_arg(val, void*);
	if (ptr == NULL)
	{
		for (iter = 0; str[iter] != '\0'; iter++)
		{
			_putchar(str[iter]);
		}
		return (iter);
	}
	x = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	z = print_x2(x);
	return (z + 2);
}
