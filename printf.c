#include " main.h"

/**
 * printf - function to print to stdout
 *
 * @format: string being passed
 *
 * Return: numb of char to be printed
 */

int _printf(const char *format, ...)
{
	va_list arg;

	va_start(arg, format);

	done = vfprintf(stdout, format, arg);
	return(done);
}
