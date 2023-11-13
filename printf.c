#include "main.h"
/**
 * _printf - function that produces output according to a format
 *
 * @format: is a character string
 *
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list arg;
	char ch;
	char *z;

	va_start(arg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			i++;
		}
		else if (*(format + 1) != '\0')
		{
			switch (*(format + 1))
			{
				case 'c':
					ch = va_arg(arg, int);
					print_c(ch);
					i += 2;
					break;
				case 's':
					z = va_arg(arg, char *);
					print_s(z);
					i += 2;
					break;
				case '%':
					write(1, "%", 1);
					i += 2;
					break;
				default:
					write(1, format, 1);
					i++;
					break;
			}
		}
		else
		{
			write(1, format, 1);
			i++;
		}
		format++;
	}
	va_end(arg);
	return (i);
}
