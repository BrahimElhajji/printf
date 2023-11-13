#include "main.h"

/**
 * print_s - Prints a string
 *
 * @s: string parametre
 *
 * Return: Success
 */ 

int print_s (char *s) 
{
	int counter = 0;

	if (s == 0)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (*s)
	{
		write(1, s, 1);
		s++;
		counter++;
	}

}
return (counter);
}
