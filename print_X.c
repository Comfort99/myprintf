#include "main.h"
/**
 * print_X - Prints an unsigned integer in uppercase hexadecimal.
 * @list: Variable argument list containing the unsigned integer.
 * Return: count or -1
 */
void print_X(va_list list)
{
	unsigned int num;
	int i;
	int *array;
	int counter = 0;
	unsigned int temp;

	num = va_arg(list, unsigned int);
	temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));
	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar("0123456789ABCDEF"[array[i]]);
	}
	free(array);
	return (counter);
}
