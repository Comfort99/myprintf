#include "main.h"
/**
   * print_X2 - Prints an unsigned integer in uppercase hexadecimal.
    * @num: Variable argument list containing the unsigned integer.
     * Return: count or -1
      */
void print_X2(unsigned int long num)
{
			long int i;
			long int *array;
			long int counter = 0;
			unsigned long int temp = num;

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
			}
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
