#include "main.h"
/**
 *rev_string - Write a function that reverses a string.
 *
 *@s: string var pointer
 */
void rev_string(char *s)
{
	nt i, j, temp;

	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	j--;
	while (j > i)
	{
		temp = s[j];
		s[j--] = s[i];
		s[i++] = temp;
	}
}
