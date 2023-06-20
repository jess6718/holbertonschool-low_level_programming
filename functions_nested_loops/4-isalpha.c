#include "main.h"

/**
 * _isalpha - checks for alpha character
 * @c: An input character
 * Description: function _isalpha - checks for alpha character
 * Return: 1 if is alpha or 0 if is otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
