#include "main.h"
#include <stdarg.h>
#include <unistd.h>

#define BUFF_SIZE 1024

int handle_format_specifier(const char *format, int *i, va_list list, char buffer[], int *buff_ind);
void print_char(char c, char buffer[], int *buff_ind);
void print_string(char *str, char buffer[], int *buff_ind);

int _printf(const char *format, ...)
{
    if (format == NULL)
        return -1;

    va_list list;
    va_start(list, format);

    int printed_chars = 0;
    char buffer[BUFF_SIZE] = {'\0'};
    int buff_ind = 0;

    for (int i = 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            buffer[buff_ind++] = format[i];
            if (buff_ind == BUFF_SIZE)
            {
                write(1, buffer, buff_ind);
                buff_ind = 0;
            }
            printed_chars++;
        }
        else
        {
            if (handle_format_specifier(format, &i, list, buffer, &buff_ind) == -1)
            {
                va_end(list);
                return -1; // Invalid format specifier
            }
            printed_chars += 1; // Count '%' as a printed character
        }
    }

    write(1, buffer, buff_ind);
    va_end(list);
    return printed_chars;
}

int handle_format_specifier(const char *format, int *i, va_list list, char buffer[], int *buff_ind)
{
    char c = format[*i];
    switch (c)
    {
        case 'c':
            print_char(va_arg(list, int), buffer, buff_ind);
            break;
        case 's':
            print_string(va_arg(list, char *), buffer, buff_ind);
            break;
        case '%':
            print_char('%', buffer, buff_ind);
            break;
        // Add more format specifiers here
        default:
            return -1; // Invalid format specifier
    }
    return 0;
}

void print_char(char c, char buffer[], int *buff_ind)
{
    buffer[(*buff_ind)++] = c;
    if (*buff_ind == BUFF_SIZE)
    {
        write(1, buffer, BUFF_SIZE);
        *buff_ind = 0;
    }
}

void print_string(char *str, char buffer[], int *buff_ind)
{
    while (*str != '\0')
    {
        buffer[(*buff_ind)++] = *str;
        if (*buff_ind == BUFF_SIZE)
        {
            write(1, buffer, BUFF_SIZE);
            *buff_ind = 0;
        }
        str++;
    }
}
