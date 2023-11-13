#include "main.h"
/**
  *
  *
  *
  *
  */
int printc(va_list val)
{
	char d;

	d = va_arg(val, int);
	_putchar (d);
	return (1);
}

