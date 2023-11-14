#include "main.h"
/**
 * print_x - Prints an unsigned integer in lowercase hexadecimal.
 * @list: Variable argument list containing the unsigned integer.
 * Return: count.
 */
int print_x(va_list list)
{
	unsigned int num;
	int i;
	int *array;
	int counter = 0;
	unsigned int temp;

<<<<<<< HEAD
	num = va_arg(list, unsigned int);
=======
	num = get_unsigned_length(list, length_modifier);
>>>>>>> f1ee11839d2bf31797435339bfd5ae8a260a5b9c
	temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;

	array = malloc(counter * sizeof(int));
	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
