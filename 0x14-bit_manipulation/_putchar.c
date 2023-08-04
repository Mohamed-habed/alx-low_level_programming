#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character C to The stdout
 * @c: The character to  printed
 *
 * Return: 1 Is On success 
 * On error -1 Is returned and errno Is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


