#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...)
{
    va_list args;
    int count = 0; // To keep track of the number of characters printed

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++; // Move to the character after '%'

            if (*format == 'c')
            {
                // Handle the 'c' conversion specifier
                char c = va_arg(args, int); // Get the character argument
                write(1, &c, 1); // Print the character to stdout
                count++;
            }
            else if (*format == 's')
            {
                // Handle the 's' conversion specifier
                char *str = va_arg(args, char *); // Get the string argument
                while (*str)
                {
                    write(1, str, 1); // Print each character of the string
                    str++;
                    count++;
                }
            }
            else if (*format == '%')
            {
                // Handle the '%%' conversion specifier
                write(1, "%", 1); // Print a literal '%' character
                count++;
            }
            else
            {
                // Unsupported conversion specifier, skip it
            }
        }
        else
        {
            write(1, format, 1); // Print regular characters
            count++;
        }

        format++;
    }

    va_end(args);
    return count;
}

