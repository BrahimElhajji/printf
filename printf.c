#include "main.h"

/**
 * _printf - function that produces output according to a format
 *
 * @format: is a character string
 *
 * Return: Success
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list arg;
	int count = 0;
	char ch;
	char *z;

	va_start(arg, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
		}
		else if (format[i + 1] != '\0')
		{
			switch (format[i + 1])
			{
				case 'c':
					ch = va_arg(arg, int);
					print_c(ch);
					count++;
					i++;
					break;
				case 's':
					z = va_arg(arg, char *);
					print_s(z);
					i++;
					break;
				case '%':
					write(1, "%", 1);
					count++;
					i++;
					break;
				default:
					write(1, &format[i], 1);
					count++;
					break;
			}
		}
		i++;
	}
	va_end(arg);
	return (count);
}
