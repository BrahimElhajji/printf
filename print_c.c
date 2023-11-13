#include "main.h"

/**
 * print_c - Prints a char
 *
 * @c: character parametre
 *
 * Return: Success
 */

int print_c(char c)
{   
	write(1, &c, 1);

	return (1);
}
