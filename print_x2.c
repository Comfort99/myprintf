#include "main.h"
/**
   * print_x2 - Prints an unsigned integer in lowercase hexadecimal.
    * @num: Variable argument list containing the unsigned integer.
     * Return: count.
      */
int print_x2(unsigned long int num)
{
	long int i;
	long int *array;
	long int counter = 0;
	unsigned long  int temp;

	temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));
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
