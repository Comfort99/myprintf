#include "main.h"

/**
   * _strlen - finds the lenght of a string.
    * @s: string
     * Return: integer.
      */
int _strlen(char *s)
{
	int character;

	for (character = 0; s[character] != 0; character++)
		;
	return (character);
}

/**
   * _strlenc - finds length of a string but for constant characters
    * @s: string
     * Return: integer
      */

int _strlenc(const char *s)
{
	int charac;

	for (charac = 0; s[charac] != 0; charac++)
		;
	return (charac);
}
