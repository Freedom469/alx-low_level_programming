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
	int i = 0, j;
	char *newStr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + i))
	{
		i++;
	}
	i++;

	newStr = (char *)malloc(i * sizeof(char));

	if (newStr == NULL)
		return (0);

	for (j = 0; j < i; j++)
		newStr[j] = str[j];
	return (newStr);
	free(newStr);

}
