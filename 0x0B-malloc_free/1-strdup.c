#include<stdlib.h>
#include "main.h"

/**
 *_strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 *@str: string
 *
 *Return: returns a pointer to the duplicated string.
 *
 */

char *_strdup(char *str)
{
	int i, j;

	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)

		ptr = (char *)malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)

		return (NULL);

	for (j = 0; j <= i; j++)
	{
		ptr[j] = str[j];
	}

	return (ptr);

}
