#include "main.h"
/**
  * printc - This prints scanned character
  * @val: argument
  * Return: This returns 1 on success.
  *
  */
int printc(va_list val)
{
	char d;

	d = va_arg(val, int);
	_putchar (d);
	return (1);
}

