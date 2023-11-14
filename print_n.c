#include "main.h"

/**
 * print_n - turning num to str
 *
 * @str: str parametre
 * @num: integer parametre
 *
 * Return: Success
 */

int print_n(char *str, int num)
{
	int i, mod, n;
	int length = 0, check = 0;

	if (num < 0)
	{
		check = 1;
		num = -num;
		str[0] = '-';
		length++;
	}
	n = num;
	while (n != 0)
	{
		length++;
		n /= 10;
	}
	for (i = length - 1; i >= check; i--)
	{
		mod = num % 10;
		num = num / 10;
		str[i] = mod + '0';
	}
	str[length] = '\0';
	write(1, str, length);
	return (num);
}
