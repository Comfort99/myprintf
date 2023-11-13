#include "main.h"
/**
  *
  *
  *
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
	x = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	y = print_x2(x);
	return (y + 2);
}
