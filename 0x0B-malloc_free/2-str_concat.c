#include <stdlib.h>
#include  "main.h"

/**
 *str_concat _ concatenates two strings
 *
 *@s1: string
 *
 *@s2: string
 *
 *Return: pointer
 *
 */

char *str_concat(char *s1, char *s2)
{

	char *str_concat(char *s1, char *s2)
	{
		int total,i,j = 0;

		char *ptr;

		if (s1 == NULL)
		{

			s1 = "";
		}

		if (s2 == NULL)
		{
			s2 = "";
		}

		for (i = 0; s1[i] || s2[i]; i++)

			ptr = (char *)malloc(sizeof(char) * i);

		if (ptr == NULL)
			return (NULL);

		for (i = 0; s1[i]; i++)
			ptr[j++] = s1[i];

		for (i = 0; s2[i]; i++)
			ptr[j++] = s2[i];

		return (ptr);
	} 


}
