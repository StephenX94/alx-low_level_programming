#include "main"

/**
 * _slower - checks if a charactwe is lowercase
 * @c: the character
 * Return:  if letter is lowercase,  if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
