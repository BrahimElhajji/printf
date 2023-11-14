#include "main.h"

/**
 * print_n - turning num to str
 *
 * @num: integer parametre
 *
 * Return: Success
 */
int print_n(int num)
{
	unsigned int i = 1, digit, divis = 1, temp, digit_c = 1;
	int counter = 0;
	char con;

	if (num < 0)
	{
		write(1, "-", 1);
		num = num * -1;
		counter++;
	}
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	digit = num;
	while (digit > 9)
	{
		digit = digit / 10;
		divis = divis * 10;
		i++;
	}
	while (digit_c <= i)
	{
		temp = num / divis;
		num = num % divis;
		divis = divis / 10;
		con = temp + '0';
		write(1, &con, 1);
		counter++;
		digit_c++;
	}
	return (counter);
}
