#include "main.h"

/**
 * print_s - Prints a string
 *
 * @s: string parametre
 *
 * Return: Success
 */ 

	int
print_s (char *s) 
{
	if (s == 0)
	{
		write (1, "(nil)", 5);
	}
	else
	{
		while (*s != '\0')
		{
			write(1, s, 1);
			s++;
		}

	}
	return (0);
}
