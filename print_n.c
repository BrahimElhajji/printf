#include "main.h"

/**
 * print_n - Prints a num
 *
 * @num: integer parametre
 *
 * Return: Success
 */

int print_n(int num)
{
	int tp, len = 0, minus = 0;
	int i, n, in = 0;
	char *buff;

	for (tp = num; tp /= 10; len++)

	if (num < 0)
	{
		minus = 1;
		len++;
	}

	buff = (char *)malloc((len + 1) * sizeof(char));
	if (buff == NULL)
		return (0);

	while (num != 0)
	{
		n = num % 10;
		n = (n < 0) ? -n : n;
		buff[in++] = '0' + n;
		num = num / 10;
	}
	if (minus)
		buff[in++] = '-';

	for (i = in - 1; i >= 0; i--)
	{
		write(1, &buff[i], 1);
	}
	free(buff);
	return (0);
}
