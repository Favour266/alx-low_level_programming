#include "main.h"
/**
 * _strlen - finds an outputs length of a string.
 * @s: lenght of a string.
 *
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
