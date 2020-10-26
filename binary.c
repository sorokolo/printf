#include "holberton.h"

/**
 * print_b - Convert of decimals in binary
 * @binary_list: Store the argument values
 * Return: The count
 */

int print_b(va_list binary_list)
{
    unsigned int i, count, num, binary, arr[32];

    i = 0, count = 0;
    num = va_arg(binary_list, int);

    if (num < 1)
    {
        _putchar(48);
        count++;
        return (count);
    }
    else
    {
        while (num > 0)
        {
            binary = num % 2;
            num /= 2;
            arr[count] = binary;
            count++;
        }
        i = count - 1;
        while (i > 0)
        {
            _putchar('0' + arr[i]);
            i--;
        }
        _putchar('0' + arr[i]);
    }
    return (count);
}