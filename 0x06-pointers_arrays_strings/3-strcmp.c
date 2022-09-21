#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 *
 * @s1: string one
 *
 * @s2: string twoo
 *
 * Return: string difference
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i, flag = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\n'; i++)
	{
		if (s1[i] != s2[i])
		{
			break;
		}
	}

	flag = s1[i] - s2[i];

	return (flag);
}
