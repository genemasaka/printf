#include <unistd.h>
/**
 *_putchar - writes a char to stdout
 * @c: character to write
 * Return: 1 on success and -1 on error
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}