#include "main.h"

/**
 * _isupper - checks if para meter is an uppercase character.
 * @c: input character.
 * Return: 1 if is an uppercase character, 0 in other case.
 */
int_isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
        }
	else 
	{
		return (0);
	}
}
