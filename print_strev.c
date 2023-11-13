#include "main.h"
/**
  * printstrev- This prints a rev in reverse.
  * @args: argument
  * Return: This returns string.
  */
int printstrev(va_list args)
{
	char *r = va_arg(args, char*);
	int i, k = 0;

	if (r == NULL)
		r = "(null)";
	while (r[k] != '\0')
		k++;
	for (i = k - 1; i >= 0; i--)
		_putchar(r[k]);
	return(k);
}
