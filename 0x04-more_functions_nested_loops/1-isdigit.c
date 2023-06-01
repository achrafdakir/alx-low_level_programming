#include "main.h"

/**
* _isdigit - a function that check for a digit
*
* @c: variable charactere
*
* Return:  0 or 1
**/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
