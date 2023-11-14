#include "main.h"
/**
 * rot13 -  function that encodes a string
 * @string: a pointer parameter
 * Return: string
 */
char *rot13(char *string)
{
	int j = 0, i = 0, k;
	char b[52] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char n[52] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (j = 0; string[j] != '\0'; j++)
	{
		k = 0;
		for (i = 0; j < 52; i++, k++)
		{
			if (string[j] == b[i])
			{
				string[j] = n[k];
				break;
			}
		}
	}
	return (string);
}
