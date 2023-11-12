#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: is a character string
 * Return: Always 0
 */

int _printf(const char *format, ...)
{
	int i = 0;
	va_list arg;
	char ch;
	char *z;

	va_start(arg, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			i++;
		}
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			switch (format[i + 1])
			{
				case 'c':
					ch = va_arg(arg, int);
					write(1, &ch, 1);
					break;
				case 's':
					z = va_arg(arg, char *);
					write(1, z, strlen(z));
					break;
				case '%':
					write(1, "%", 1);
					break;
				default:
					write(1, &format[i], 1);
					break;
			}
			i += 2;
		}
	}
	va_end(arg);
	return (0);
}
