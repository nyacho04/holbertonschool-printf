# _printf

**_printf** is a custom implementation of the `printf` function from the C standard library. This function allows printing data to the console using a specified format string. This project try to replicate basic functionalities of the C standard library.

## Features

- **Character printing**: Allows printing individual characters.
- **String printing**: Allows printing strings. If a `NULL` pointer is passed, it prints "(null)".
- **Percentage printing**: Supports printing the '%' character using `%%`.
- **Format specifiers**: Supports format specifiers such as `%c`, `%s`, `%d`, `%i`, etc.

## Files
- **main.c**:  This file serves as the entry point for testing the custom _printf function. It compares the output and behavior of _printf with the standard printf function using various format specifiers, including characters, strings, integers, pointers, and the percent sign.

- **main.h**: This header file contains the declarations for the custom _printf function and its associated helper functions. It includes necessary standard libraries and defines the prototype for _putchar, _print_char, and _printf.

- **_putchar.c**: This file contains the implementation of the _putchar function, which writes a single character to the standard output (stdout). It uses the write system call to print the character and returns 1 on success or -1 on error.

# Usage of _printf
- How my _printf function works to print a character
```c
int _printf(const char *format, ...)
{
	va_list ap;
	int count = 0;
	const char *ptr;

	va_start(ap, format);

	for (ptr = format; *ptr != '\0'; ptr++)
		{
		if (*ptr != '%')
		{
		_putchar(*ptr);
		count++;
		}
		else
		{
		if (*(ptr + 1) == '\0')
		{
			_putchar('%');
			count++;
			break;
		}
		switch (*(++ptr))
		{
				case 'c':
				_putchar(va_arg(ap, int));
				count++;
				break;
