#include "main.h"
/**
   * print_x - Prints an unsigned integer in lowercase hexadecimal.
    * @list: Variable argument list containing the unsigned integer.
     * Return: count or -1
      */
void print_x2(unsigned long int num)
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

		array = malloc(counter * sizeof(long int));
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
																			_putchar("0123456789abcdef"[array[i]]);
																				}
															free(array);
																return (counter);
}
