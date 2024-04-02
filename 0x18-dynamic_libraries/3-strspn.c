#include "main.h"

/**
 * _strspn - string length returned values are matched consistently
 * @s: search string
 * @accept: matches target
 * Return: bytes number method consistently
 */

  unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int matches = 0;

	while (s[i] != '\0') /*iterate through string*/
	{
		for (j = 0; accept[j] != '\0'; j++) /*iterate through target*/
		{
			if (s[i] == accept[j]) /*record & break at first match*/
			{
				matches++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (matches);/*return if idx doesn't match*/
		}
		i++;
	}
	return (matches); /* return num if all match till end */
}
