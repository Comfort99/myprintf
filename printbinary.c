#include "main.h"
/**
  *
  *
  *
  */
int printbinary(va_list val)
{
	int flg = 0;
	int count = 0;
	unsigned int numb = va_arg(val, unsigned int)
	unsigned int k;
	int l = 0,c = 1, d;

	for (; l < 32; l++)
	{
		k = ((c << (31 - l)) & numb);
		if (k >> (31 - i))
			flg = 1;
		if (flg)
		{
			d = k >> (31 - i);
			_putchar(d + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
