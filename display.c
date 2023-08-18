#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * display - entry block
 * @c: an character
 * Return: an integer
 */
int display(char c)
{
	return (buffer(c));
}

/**
 * buffer - Save the character in a buffer
 * @c: Character
 * Return: 1
 */

int buffer(char c)
{
	static char tab[1024];
	static int a;

	if (c == -1 || a == 1024)
	{
		write(1, tab, a);
		a = 0;
	}

	if (c != -1)
		tab[a++] = c;

	return (1);
}
