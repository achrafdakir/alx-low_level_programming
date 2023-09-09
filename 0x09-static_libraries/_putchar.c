#include <unistd.h>
#include "main.h"
/**
 * main - create _putchar
 *achraf Dakir
 * Return: Success 1 Error -1
*/
int _putchar(char c)
{
        return (write(1, &c, 1));
}
